/*
 * XREFs of sub_1403B8D0C @ 0x1403B8D0C
 * Callers:
 *     sub_1403B8BF8 @ 0x1403B8BF8 (sub_1403B8BF8.c)
 *     sub_140AF82A8 @ 0x140AF82A8 (sub_140AF82A8.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1402949F0 (KeGetProcessorNumberFromIndex.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS sub_1403B8D0C()
{
  NTSTATUS result; // eax
  __int64 v1; // rcx
  _QWORD *v2; // rdx
  _DWORD *v3; // r8
  int v4; // r9d
  int v5; // eax
  unsigned int v6; // edi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  ULONG v10; // edi
  _DWORD *v11; // rbx
  _DWORD *v12; // rsi
  int v13; // r8d
  unsigned __int64 v14; // rdx
  WORD Group; // ax
  __int64 v16; // rcx
  __int64 v17; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  if ( qword_140C54B50 )
    goto LABEL_2;
  v1 = 0LL;
  v2 = *(_QWORD **)(qword_140C54A88 + 248);
  while ( v2 != (_QWORD *)(qword_140C54A88 + 248) )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    v4 = v3[6] - v3[5];
    v5 = v3[8];
    if ( v5 == 5 && v4 )
    {
      qword_140C54B50 = (__int64)v3;
      goto LABEL_2;
    }
    if ( v5 == 4 && v4 && !v1 )
      v1 = (__int64)v3;
  }
  qword_140C54B50 = v1;
  if ( v1 )
  {
LABEL_2:
    if ( byte_140C4ADB4 )
    {
      if ( !qword_140D016F0 )
      {
        v6 = dword_140C54A94;
        if ( (_DWORD)dword_140C4EFC4 && 32 * (int)dword_140C4EFC4 < (unsigned int)dword_140C54A94 )
          v6 = 32 * dword_140C4EFC4;
        v7 = (_DWORD *)sub_1403BF104(24 * v6, 1LL);
        qword_140D016F0 = (__int64)v7;
        v8 = v7;
        if ( !v7 )
          return -1073741801;
        memset(v7, 0, 24 * v6);
        v9 = &v8[6 * v6];
        while ( v8 < v9 )
        {
          *v8 = -1;
          v8 += 6;
        }
        qword_140D016F8 = qword_140D016F0;
        qword_140D01708 = qword_140D016F0 + 24LL * v6;
      }
      v10 = 0;
      if ( (_DWORD)dword_140C54A90 )
      {
        v11 = (_DWORD *)qword_140C54A80;
        v12 = dword_140D0E5E0;
        do
        {
          if ( *v11 == 6 )
          {
            result = KeGetProcessorNumberFromIndex(v10, &ProcNumber);
            if ( result < 0 )
              return result;
            v13 = v11[2];
            v14 = qword_140D016F0;
            Group = ProcNumber.Group;
            while ( v14 < qword_140D016F8 && (*(_WORD *)(v14 + 16) != ProcNumber.Group || *(_DWORD *)v14 != v13) )
              v14 += 24LL;
            if ( v14 == qword_140D016F8 )
            {
              if ( v14 >= qword_140D01708 )
                KeBugCheckEx(0x5Cu, 0x201uLL, 0LL, 0xFFFFFFFF80000005uLL, (unsigned int)dword_140C4EFC4);
              ++dword_140D01700;
              v16 = qword_140D016F8 + 24;
              *(_DWORD *)v14 = v13;
              qword_140D016F8 = v16;
              *(_WORD *)(v14 + 16) = Group;
            }
            v17 = *(_QWORD *)(v14 + 8);
            _bittestandset64(&v17, *v12 & 0x3F);
            *(_QWORD *)(v14 + 8) = v17;
          }
          ++v10;
          v11 += 6;
          ++v12;
        }
        while ( v10 < (unsigned int)dword_140C54A90 );
      }
    }
  }
  else
  {
    dword_140C54A94 = 1;
  }
  return 0;
}
