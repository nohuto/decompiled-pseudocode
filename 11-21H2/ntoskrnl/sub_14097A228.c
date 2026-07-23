/*
 * XREFs of sub_14097A228 @ 0x14097A228
 * Callers:
 *     sub_14097A120 @ 0x14097A120 (sub_14097A120.c)
 * Callees:
 *     sub_140281C44 @ 0x140281C44 (sub_140281C44.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14030B7F0 @ 0x14030B7F0 (sub_14030B7F0.c)
 *     sub_140347920 @ 0x140347920 (sub_140347920.c)
 *     sub_140882604 @ 0x140882604 (sub_140882604.c)
 *     sub_14097A9C4 @ 0x14097A9C4 (sub_14097A9C4.c)
 *     sub_14097AC04 @ 0x14097AC04 (sub_14097AC04.c)
 *     sub_1409B4318 @ 0x1409B4318 (sub_1409B4318.c)
 */

__int64 __fastcall sub_14097A228(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v11; // esi
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  void *v15; // rbx
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 72);
  v17 = 0LL;
  v18 = 0LL;
  LODWORD(v9) = 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 16)) <= 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  sub_140281C44((__int64)CurrentThread, a2);
  if ( *(_BYTE *)(v4 + 76) )
  {
    if ( a4 < 0x38 )
    {
      v11 = -1073741820;
      goto LABEL_10;
    }
    v12 = *(_QWORD *)(a3 + 48);
    if ( v12 )
    {
      v13 = sub_140347920(a1, 0x746C6644u);
      LOBYTE(v14) = *((_BYTE *)CurrentThread + 562);
      v15 = (void *)v13;
      v11 = sub_14097A9C4(v12, v13, v14, &v18, &v17);
      ObfDereferenceObject(v15);
      if ( v11 < 0 )
        goto LABEL_10;
      v9 = *(_QWORD *)(*(_QWORD *)(v17 + 96) + 56LL);
    }
  }
  v11 = sub_1409B4318(v4, a3, a4, v9, v18);
LABEL_10:
  sub_140882604((PVOID)v4);
  if ( v18 )
    sub_14097AC04();
  sub_14030B7F0((__int64)CurrentThread, a2);
  return (unsigned int)v11;
}
