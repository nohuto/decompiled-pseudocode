/*
 * XREFs of sub_140A7F280 @ 0x140A7F280
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A96894 @ 0x140A96894 (sub_140A96894.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 */

char __fastcall sub_140A7F280(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rdx
  char v4; // si
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  LOBYTE(a1) = 2;
  v2 = sub_140A96894(a1);
  v4 = sub_14042A5E0(v1, v3);
  if ( v2 )
    *(_WORD *)(v2 + 10) = HIDWORD(KeGetPcr()[1].LockArray);
  sub_140A97900(v1, retaddr);
  return v4;
}
