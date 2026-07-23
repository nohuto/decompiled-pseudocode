/*
 * XREFs of sub_140981778 @ 0x140981778
 * Callers:
 *     sub_14096C1B0 @ 0x14096C1B0 (sub_14096C1B0.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402DBF90 @ 0x1402DBF90 (sub_1402DBF90.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140981778()
{
  ULONG v0; // ebx
  _RTL_BITMAP *v1; // rax
  __int64 v2; // rsi
  _RTL_BITMAP *v3; // rdi
  ULONG_PTR v4; // rax
  unsigned __int64 v5; // rbx
  _QWORD *v6; // rbp
  unsigned __int64 SizeOfBitMap; // rax

  v0 = 512;
  if ( (__int64 *)qword_140C51F48 != &qword_140C51F40 )
    v0 = qword_140C51F28->SizeOfBitMap + 512;
  if ( v0 <= qword_140C51F28->SizeOfBitMap )
    return 0LL;
  if ( v0 > 0x400 )
    return 0LL;
  v1 = (_RTL_BITMAP *)sub_1402828F0(64, 8 * ((v0 >> 6) + ((v0 & 0x3F) != 0) + 2), 0x20206D4Du);
  v2 = 0LL;
  v3 = v1;
  if ( !v1 )
    return 0LL;
  v1->SizeOfBitMap = v0;
  v1->Buffer = &v1[1].SizeOfBitMap;
  if ( (__int64 *)qword_140C51F48 == &qword_140C51F40 )
  {
    v4 = sub_1403095B0((__int64)&qword_140C534C0, 2u);
    if ( !v4 )
      goto LABEL_14;
    v5 = (__int64)(v4 << 25) >> 16;
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    v5 = qword_140C51F48 + 8LL * qword_140C51F28->SizeOfBitMap;
  }
  v6 = (_QWORD *)sub_140313C70(v5);
  if ( !(unsigned int)sub_1402DBF90((__int64)v6, (__int64)v6, 33, 9) )
  {
    if ( (__int64 *)qword_140C51F48 == &qword_140C51F40 )
      sub_1402BB6D0((__int64)&qword_140C534C0, v6, 1u);
LABEL_14:
    ExFreePoolWithTag(v3, 0);
    return 0LL;
  }
  memset((void *)v5, 0, 0x1000uLL);
  if ( (__int64 *)qword_140C51F48 == &qword_140C51F40 )
  {
    *(_QWORD *)v5 = *(_QWORD *)qword_140C51F48;
    qword_140C51F48 = v5;
  }
  RtlClearAllBits(v3);
  SizeOfBitMap = qword_140C51F28->SizeOfBitMap;
  LOBYTE(v2) = (SizeOfBitMap & 0x3F) != 0;
  memmove(v3->Buffer, qword_140C51F28->Buffer, 8 * ((SizeOfBitMap >> 6) + v2));
  if ( qword_140C51F28 != (PRTL_BITMAP)&dword_140C51F30 )
    ExFreePoolWithTag(qword_140C51F28, 0);
  qword_140C51F28 = v3;
  return 1LL;
}
