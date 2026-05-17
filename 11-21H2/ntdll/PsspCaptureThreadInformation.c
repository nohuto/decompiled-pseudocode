/*
 * XREFs of PsspCaptureThreadInformation @ 0x18006117C
 * Callers:
 *     PssNtCaptureSnapshot @ 0x180060B70 (PssNtCaptureSnapshot.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x180034EC0 (RtlGetExtendedContextLength.c)
 *     PsspFreeLinkedHandleList @ 0x18006147C (PsspFreeLinkedHandleList.c)
 *     PsspDumpThread @ 0x180061500 (PsspDumpThread.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A4370 (ZwAllocateVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A4570 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A45B0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A49B0 (NtCreateSection.c)
 *     ZwGetNextThread @ 0x1800A6020 (ZwGetNextThread.c)
 */

__int64 __fastcall PsspCaptureThreadInformation(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 *v6; // r14
  __int64 *v7; // rdi
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  int NextThread; // eax
  int v11; // ecx
  __int64 v12; // rdx
  int v13; // esi
  unsigned __int16 v14; // ax
  int v15; // edi
  unsigned __int64 v16; // rcx
  int v17; // r15d
  __int64 *v18; // rsi
  unsigned int v19; // r12d
  int v20; // eax
  int v21; // r15d
  int ExtendedContextLength; // eax
  int v24; // [rsp+28h] [rbp-69h]
  __int64 v25; // [rsp+58h] [rbp-39h] BYREF
  __int64 v26; // [rsp+60h] [rbp-31h] BYREF
  __int64 *v27; // [rsp+68h] [rbp-29h] BYREF
  __int64 v28; // [rsp+70h] [rbp-21h] BYREF
  __int64 v29; // [rsp+78h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-11h] BYREF
  int v31; // [rsp+88h] [rbp-9h]
  __int64 v32; // [rsp+90h] [rbp-1h] BYREF
  int v33; // [rsp+98h] [rbp+7h]
  __int64 v34; // [rsp+9Ch] [rbp+Bh]
  _QWORD v35[8]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = 0;
  v31 = a3 & 0x100;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (a3 >> 7) & 8 | (v31 != 0 ? 72 : 64);
  v9 = 0;
  NextThread = ZwGetNextThread(a2, 0LL, v8, 0LL, 0, &v28);
  if ( NextThread != -2147483622 )
  {
    while ( 1 )
    {
      v11 = v28;
      v26 = v28;
      v12 = v28;
      if ( NextThread < 0 )
        break;
      if ( !v7 || (v14 = *((_WORD *)v7 + 5), v14 >= *((_WORD *)v7 + 4)) )
      {
        v25 = 1LL;
        v27 = 0LL;
        v13 = ZwAllocateVirtualMemory(-1LL, &v27, 0LL, &v25, 4096, 4);
        if ( v13 < 0 )
          goto LABEL_35;
        if ( v6 )
        {
          *v7 = (__int64)v27;
          v7 = v27;
        }
        else
        {
          v7 = v27;
          v6 = v27;
        }
        v12 = v26;
        *((_WORD *)v7 + 4) = (unsigned __int64)(v25 - 16) >> 2;
        v14 = 0;
        *((_WORD *)v7 + 5) = 0;
        v11 = v28;
      }
      ++v9;
      *((_DWORD *)v7 + v14 + 3) = v11;
      ++*((_WORD *)v7 + 5);
      NextThread = ZwGetNextThread(a2, v12, v8, 0LL, 0, &v28);
      if ( NextThread == -2147483622 )
      {
        if ( !v9 )
          return 0LL;
        v15 = 0;
        LODWORD(v26) = 0;
        if ( v31 )
        {
          if ( (a3 & 0x200) == 0
            || (ExtendedContextLength = RtlGetExtendedContextLength(a4, (__int64)&v26),
                v15 = v26,
                ExtendedContextLength < 0) )
          {
            v15 = 1232;
          }
        }
        *(_DWORD *)(a1 + 1024) = v15;
        v16 = v9 * (unsigned __int64)(((v15 + 15) & 0xFFFFFFF0) + 128);
        if ( v16 > 0xFFFFFFFF )
        {
          v13 = -1073741675;
        }
        else
        {
          v35[0] = (unsigned int)v16;
          v13 = NtCreateSection(&Handle, 983047LL, &unk_180131F88, v35, 4, 0x8000000, 0LL);
          if ( v13 >= 0 )
          {
            v29 = 0LL;
            v25 = 0LL;
            v13 = ZwMapViewOfSection(Handle, -1LL, &v29, 0LL, 0LL, 0LL, &v25, 1, 0, 4);
            if ( v13 >= 0 )
            {
              v17 = 0;
              v18 = v6;
              v32 = v29;
              v33 = v25;
              v34 = 0LL;
              if ( v6 )
              {
                do
                {
                  v19 = 0;
                  if ( *((_WORD *)v18 + 5) )
                  {
                    do
                    {
                      v28 = *((unsigned int *)v18 + v19 + 3);
                      v20 = PsspDumpThread((unsigned int)&v32, a3, a4, v15, v24, v28);
                      v21 = v20;
                      if ( v20 == -1073741789 )
                        break;
                      if ( v20 < 0 )
                      {
                        NtUnmapViewOfSection(-1LL);
                        NtClose(Handle);
                        v13 = v21;
                        goto LABEL_35;
                      }
                      ++v19;
                    }
                    while ( v19 < *((unsigned __int16 *)v18 + 5) );
                    if ( v20 < 0 )
                      break;
                  }
                  v18 = (__int64 *)*v18;
                }
                while ( v18 );
                v17 = HIDWORD(v34);
                v4 = v34;
              }
              NtUnmapViewOfSection(-1LL);
              PsspFreeLinkedHandleList(v6);
              *(_QWORD *)(a1 + 1000) = v4;
              *(_QWORD *)(a1 + 1008) = Handle;
              *(_DWORD *)(a1 + 992) = v17;
              *(_QWORD *)(a1 + 1016) = MEMORY[0x7FFE0014];
              return 0LL;
            }
            NtClose(Handle);
          }
        }
LABEL_35:
        PsspFreeLinkedHandleList(v6);
        return (unsigned int)v13;
      }
    }
    v13 = NextThread;
    goto LABEL_35;
  }
  return 0LL;
}
