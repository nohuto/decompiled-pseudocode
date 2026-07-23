/*
 * XREFs of sub_14074C1F8 @ 0x14074C1F8
 * Callers:
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1405E364C @ 0x1405E364C (sub_1405E364C.c)
 *     sub_14074C2EC @ 0x14074C2EC (sub_14074C2EC.c)
 *     sub_1407FBE14 @ 0x1407FBE14 (sub_1407FBE14.c)
 */

__int64 __fastcall sub_14074C1F8(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( *(_BYTE *)(a3 + 1) )
  {
    if ( *(_BYTE *)(a3 + 1) == 1 )
    {
      v4 = sub_14074C2EC(a3);
    }
    else
    {
      if ( *(_BYTE *)(a3 + 1) != 2 )
      {
        v5 = -1073741808;
        goto LABEL_5;
      }
      v4 = sub_1405E364C(a3, a1);
    }
  }
  else
  {
    v4 = sub_1407FBE14(a2, a3, a1);
  }
  v5 = v4;
LABEL_5:
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 1);
  return v5;
}
