/*
 * XREFs of sub_1406593C0 @ 0x1406593C0
 * Callers:
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140429770 @ 0x140429770 (sub_140429770.c)
 *     sub_140659774 @ 0x140659774 (sub_140659774.c)
 *     sub_140659C4C @ 0x140659C4C (sub_140659C4C.c)
 *     sub_1409B202C @ 0x1409B202C (sub_1409B202C.c)
 */

__int64 __fastcall sub_1406593C0(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 result; // rax
  PEPROCESS ThreadProcess; // rax
  int v5; // r8d
  unsigned int v6; // ebx
  ULONG_PTR v7; // rcx
  _QWORD *v8; // r15
  unsigned int *v9; // rcx
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (*((_BYTE *)CurrentThread + 3) & 4) != 0 )
  {
    sub_1409B202C();
    return 0LL;
  }
  ThreadProcess = PsGetThreadProcess(CurrentThread);
  v6 = *(_DWORD *)(a1 + 48) & 0xFFFF9FFF;
  v7 = *((unsigned int *)ThreadProcess + 731);
  if ( (unsigned int)v7 >= 0x20 )
    KeBugCheckEx(0x1E0u, 1uLL, v7, *((_QWORD *)ThreadProcess + 362), 0LL);
  v8 = (_QWORD *)((char *)&unk_140E01D30 + 24 * v7);
  v9 = (unsigned int *)v8[((v6 >> 12) & 7) + 1];
  if ( !v9 )
    return 1LL;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFu) >= *v9 )
  {
    *(_QWORD *)(a1 + 48) = 3221225500LL;
    return 0LL;
  }
  v10 = *(_WORD *)(a1 + 48) & 0xFFF;
  v11 = v9[v10 + 1];
  if ( !(_DWORD)v11 )
    return 1LL;
  if ( (_DWORD)v11 == 1 )
    return 2LL;
  if ( (*(_WORD *)(a1 + 48) & 0x1000) == 0x1000 )
  {
    v12 = sub_140659774(CurrentThread);
    v13 = v12;
    if ( v12 < 0 )
    {
      if ( v12 == -1073741823 )
      {
        v13 = *(char *)(v10 + 4LL * (unsigned int)xmmword_140D06FB0 + xmmword_140D06FA0);
        if ( v13 == 1 )
          v13 = -1073741796;
      }
      v14 = v13;
      goto LABEL_20;
    }
  }
  v15 = *v8 + ((v11 >> 4) & 0xFFFFFFFFFFFFFF0LL);
  if ( (v11 & 0x10) == 0 )
  {
    v14 = sub_140429770((_QWORD *)a1, v15, v11 & 0xF);
LABEL_20:
    result = 0LL;
    goto LABEL_21;
  }
  LOBYTE(v5) = v11 & 0xF;
  result = sub_140659C4C(a1, v15, v5, v6, (__int64)&v16);
  if ( !(_DWORD)result )
  {
    v14 = v16;
LABEL_21:
    *(_QWORD *)(a1 + 48) = v14;
  }
  return result;
}
