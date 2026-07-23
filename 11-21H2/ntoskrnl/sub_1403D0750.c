/*
 * XREFs of sub_1403D0750 @ 0x1403D0750
 * Callers:
 *     <none>
 * Callees:
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1403D0750(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v4; // r9d
  char v6; // di
  __int64 v9; // rax
  int v10; // edx
  unsigned int v11; // r9d
  __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // r9d
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // r9d
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rax
  int v21; // edx
  unsigned int v22; // r9d
  __int64 v23; // rax
  int v24; // edx
  unsigned int v25; // r9d
  __int64 v26; // rax
  unsigned int v27; // r15d
  __int64 v28; // rbx
  __int64 v29; // r12
  _QWORD *v30; // rcx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  _QWORD *v35; // rax
  int v36; // ebx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rcx
  bool v40; // cf
  unsigned int v41; // r15d
  unsigned int v42; // r9d
  _QWORD *StartContext; // rax
  void *v44; // rbx
  signed __int64 v46; // rax
  bool v47; // cc
  signed __int64 v48; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+50h] BYREF
  char *v51; // [rsp+C8h] [rbp+58h]

  v51 = a4;
  v4 = *(_DWORD *)(a3 + 24);
  v6 = 0;
  ThreadHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v9 = sub_140349710(NonPagedPoolNx, 16LL * (unsigned int)(dword_140C49B10 + 1), 1901552451LL, v4 | 0x80000000, 0);
  v10 = dword_140C49B10;
  v11 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 232) = v9;
  v12 = sub_140349710(NonPagedPoolNx, 16LL * (unsigned int)(v10 + 1), 1901552451LL, v11, 0);
  v13 = dword_140C49B10;
  v14 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 256) = v12;
  v15 = sub_140349710(NonPagedPoolNx, 16LL * (unsigned int)(v13 + 1), 1901552451LL, v14, 0);
  v16 = dword_140C49B10;
  v17 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 264) = v15;
  v18 = sub_140349710(NonPagedPoolNx, 404LL * (unsigned int)(v16 + 1), 1901552451LL, v17, 0);
  v19 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a3 + 280) = v18;
  v20 = sub_140349710(NonPagedPoolNx, 24LL * (unsigned int)(dword_140C49B10 + 1), 1901552451LL, v19 | 0x80000000, 0);
  v21 = dword_140C49B10;
  v22 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 272) = v20;
  v23 = sub_140349710(NonPagedPoolNx, 4LL * (unsigned int)(v21 + 1), 1901552451LL, v22, 0);
  v24 = dword_140C49B10;
  v25 = *(_DWORD *)(a3 + 24) | 0x80000000;
  *(_QWORD *)(a3 + 240) = v23;
  v26 = sub_140349710(NonPagedPoolNx, 4LL * (unsigned int)(v24 + 1), 1901552451LL, v25, 0);
  *(_QWORD *)(a3 + 248) = v26;
  if ( *(_QWORD *)(a3 + 232)
    && *(_QWORD *)(a3 + 256)
    && *(_QWORD *)(a3 + 264)
    && *(_QWORD *)(a3 + 280)
    && *(_QWORD *)(a3 + 272)
    && *(_QWORD *)(a3 + 240)
    && v26 )
  {
    v27 = 0;
    while ( 1 )
    {
      v28 = 404LL * v27;
      v29 = 16LL * v27;
      v30 = (_QWORD *)(v29 + *(_QWORD *)(a3 + 232));
      v30[1] = v30;
      *v30 = v30;
      v31 = (_QWORD *)(v29 + *(_QWORD *)(a3 + 256));
      v31[1] = v31;
      *v31 = v31;
      v32 = (_QWORD *)(v29 + *(_QWORD *)(a3 + 264));
      v32[1] = v32;
      *v32 = v32;
      v33 = 3LL * v27;
      v34 = *(_QWORD *)(a3 + 272);
      *(_WORD *)(v34 + 8 * v33) = 1;
      *(_BYTE *)(v34 + 8 * v33 + 2) = 6;
      *(_DWORD *)(v34 + 8 * v33 + 4) = 0;
      v35 = (_QWORD *)(v34 + 24LL * v27 + 8);
      v35[1] = v35;
      *v35 = v35;
      *(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * v27) = 0;
      *(_DWORD *)(*(_QWORD *)(a3 + 248) + 4LL * v27) = 0;
      memset((void *)(v28 + *(_QWORD *)(a3 + 280)), 255, 4LL * (unsigned int)dword_140C49B14);
      *(_DWORD *)(v28 + *(_QWORD *)(a3 + 280)) = 0;
      v36 = 1;
      if ( (unsigned int)dword_140C49B14 > 1 )
        break;
LABEL_13:
      if ( ++v27 > dword_140C49B10 )
      {
        v41 = 0;
        while ( 1 )
        {
          v42 = *(_DWORD *)(a3 + 24) | 0x80000000;
          ObjectAttributes.Length = 48;
          memset(&ObjectAttributes.RootDirectory, 0, 20);
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          StartContext = (_QWORD *)sub_140349710(NonPagedPoolNx, 0x50uLL, 1901552451LL, v42, 0);
          v44 = StartContext;
          if ( !StartContext )
            goto LABEL_21;
          *((_DWORD *)StartContext + 8) = 3;
          StartContext[7] = a1;
          StartContext[8] = a2;
          StartContext[9] = a3;
          *((_DWORD *)StartContext + 10) = 0;
          *((_DWORD *)StartContext + 9) = v41;
          StartContext[2] = sub_14053E700;
          StartContext[3] = StartContext;
          *StartContext = 0LL;
          ++*(_DWORD *)(*(_QWORD *)(a3 + 240) + 4LL * v41);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1232)) <= 1 )
            __fastfail(0xEu);
          if ( a2 && _InterlockedIncrement64((volatile signed __int64 *)(a2 + 8)) <= 1 )
            __fastfail(0xEu);
          if ( PsCreateSystemThread(
                 &ThreadHandle,
                 0x1FFFFFu,
                 &ObjectAttributes,
                 *(HANDLE *)(*(_QWORD *)(a1 + 8) + 112LL),
                 0LL,
                 (PKSTART_ROUTINE)sub_1403C4AE0,
                 StartContext) < 0 )
          {
            ExFreePoolWithTag(v44, 0x71576343u);
            sub_140276728(a1);
            if ( a2 )
            {
              v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
              v47 = v46 <= 1;
              v48 = v46 - 1;
              if ( v47 )
              {
                if ( v48 )
                  __fastfail(0xEu);
                KeSetEvent((PRKEVENT)(a2 + 1200), 0, 0);
              }
            }
            goto LABEL_21;
          }
          ZwClose(ThreadHandle);
          if ( ++v41 > dword_140C49B10 )
          {
            v6 = 1;
            goto LABEL_21;
          }
        }
      }
    }
    while ( 1 )
    {
      v37 = sub_140349710(NonPagedPoolNx, 0x50uLL, 1901552451LL, *(_DWORD *)(a3 + 24) | 0x80000000, 0);
      if ( !v37 )
        break;
      *(_QWORD *)(v37 + 56) = a1;
      *(_QWORD *)(v37 + 64) = a2;
      *(_DWORD *)(v37 + 32) = 3;
      *(_QWORD *)(v37 + 72) = a3;
      *(_DWORD *)(v37 + 40) = v36;
      *(_DWORD *)(v37 + 36) = v27;
      *(_QWORD *)(v37 + 16) = sub_14053E700;
      *(_QWORD *)(v37 + 24) = v37;
      *(_QWORD *)v37 = 0LL;
      v38 = v29 + *(_QWORD *)(a3 + 232);
      v39 = *(__int64 **)(v38 + 8);
      if ( *v39 != v38 )
        __fastfail(3u);
      *(_QWORD *)v37 = v38;
      v40 = ++v36 < (unsigned int)dword_140C49B14;
      *(_QWORD *)(v37 + 8) = v39;
      *v39 = v37;
      *(_QWORD *)(v38 + 8) = v37;
      if ( !v40 )
        goto LABEL_13;
    }
  }
LABEL_21:
  *v51 = v6;
  return v6;
}
