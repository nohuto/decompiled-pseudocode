/*
 * XREFs of sub_1801F1488 @ 0x1801F1488
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1801F1488(CFrameInfo *a1)
{
  char v1; // cf
  char v2; // of
  char v3; // ah
  char v4; // [rsp-7h] [rbp-7h]

  if ( !v2 )
    JUMPOUT(0x1801F141ALL);
  if ( __OFADD__(v1, v3) | __OFADD__(v4, v1 + v3) )
    JUMPOUT(0x1801F145ELL);
  CFrameInfo::~CFrameInfo(a1);
}
