/*
 * XREFs of sub_1402A3610 @ 0x1402A3610
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x1402A2FE0 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1402A3510 (FsRtlInsertPerFileObjectContext.c)
 *     sub_14071CD2C @ 0x14071CD2C (sub_14071CD2C.c)
 * Callees:
 *     sub_1402A3A60 @ 0x1402A3A60 (sub_1402A3A60.c)
 */

__int64 __fastcall sub_1402A3610(__int64 a1, _QWORD *a2, char a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rbx
  __int64 result; // rax

  v3 = *(_QWORD **)(a1 + 208);
  v4 = 0LL;
  if ( v3 )
    goto LABEL_2;
  if ( !a3 )
  {
    result = 0LL;
    goto LABEL_5;
  }
  result = sub_1402A3A60(a1, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD **)(a1 + 208);
    if ( !v3 )
    {
LABEL_4:
      result = 0LL;
      goto LABEL_5;
    }
LABEL_2:
    if ( v3 != off_140C06A80 )
      v4 = v3[4];
    goto LABEL_4;
  }
LABEL_5:
  *a2 = v4;
  return result;
}
