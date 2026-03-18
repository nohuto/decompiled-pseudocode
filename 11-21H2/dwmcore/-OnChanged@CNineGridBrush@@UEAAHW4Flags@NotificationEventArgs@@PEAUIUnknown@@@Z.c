/*
 * XREFs of ?OnChanged@CNineGridBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180036080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CNineGridBrush::OnChanged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v5; // al

  if ( (_DWORD)a2 == 14 )
  {
    a4 = *(_QWORD *)(a1 + 88);
    v5 = 0;
    if ( a4 )
      v5 = *(_BYTE *)(a4 + 80) != 0;
    *(_BYTE *)(a1 + 80) = v5;
  }
  return CBrush::OnChanged(a1, a2, a3, a4);
}
