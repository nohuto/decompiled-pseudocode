/*
 * XREFs of sub_1402D594C @ 0x1402D594C
 * Callers:
 *     sub_1402D5824 @ 0x1402D5824 (sub_1402D5824.c)
 *     sub_1402E3150 @ 0x1402E3150 (sub_1402E3150.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     sub_140374AC0 @ 0x140374AC0 (sub_140374AC0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer2 @ 0x1402D3FB0 (KeCancelTimer2.c)
 *     sub_1402D59E8 @ 0x1402D59E8 (sub_1402D59E8.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 */

__int64 __fastcall sub_1402D594C(_QWORD *Object, __int64 *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  char v7; // cl

  v4 = 0;
  if ( a3 && (*((_BYTE *)Object + 129) & 2) != 0 )
  {
    v4 = -1073741811;
  }
  else if ( a4 && !(unsigned __int8)sub_1402D59E8(a4, a2, a3) )
  {
    v4 = -1073741583;
  }
  else
  {
    if ( a2 )
    {
      v6 = *a2;
      v7 = 1;
    }
    else
    {
      v7 = 0;
      v6 = 0LL;
    }
    Object[18] = v6;
    Object[19] = 0LL;
    if ( a4 )
      Object[19] = *(_QWORD *)(a4 + 8);
    if ( v7 )
      KeSetTimer2(Object, Object[18], a3, a4);
    else
      KeCancelTimer2((__int64)Object);
  }
  ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  return v4;
}
