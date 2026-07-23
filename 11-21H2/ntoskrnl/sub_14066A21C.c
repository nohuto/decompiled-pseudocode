/*
 * XREFs of sub_14066A21C @ 0x14066A21C
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14066A374 @ 0x14066A374 (sub_14066A374.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

void *__fastcall sub_14066A21C(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r14
  void *v3; // rax
  int v4; // edi
  void *v5; // rbx
  int v6; // eax
  size_t v7; // r8
  unsigned int v8; // edi
  unsigned int v9; // ebx
  _BYTE v11[4]; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+34h] [rbp-35h] BYREF
  _DWORD v13[22]; // [rsp+38h] [rbp-31h] BYREF

  v11[0] = 0;
  memset(v13, 0, 76);
  v12 = 0;
  CurrentThread = KeGetCurrentThread();
  v3 = (void *)sub_1407B3B60(CurrentThread, 1953654867LL, &v12, v11, v13, 0LL);
  v4 = v12;
  v5 = v3;
  if ( v12 == 2 && v13[0] < 2 )
  {
    if ( v3 )
      ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    v5 = (void *)sub_140347920(*((_QWORD *)CurrentThread + 68), 0x746C6644u);
    v4 = 1;
  }
  sub_14066A374(v5, &v13[2], 68LL);
  if ( v4 == 1 )
  {
    sub_1402F89B0((signed __int64 *)(*((_QWORD *)CurrentThread + 68) + 1208LL), (unsigned __int64)v5, 0x74726853u);
  }
  else if ( v5 )
  {
    ObfDereferenceObjectWithTag(v5, 0x74726853u);
  }
  v6 = v13[1];
  v7 = v13[1];
  *(_DWORD *)(a1 + 2) = 2;
  *(_WORD *)(a1 + 6) = v6;
  v8 = v6 + 8;
  v9 = (v6 + 15) & 0xFFFFFFF8;
  *(_WORD *)a1 = (v6 + 15) & 0xFFF8;
  memmove((void *)(a1 + 8), &v13[2], v7);
  return memset((void *)(a1 + v8), 0, v9 - v8);
}
