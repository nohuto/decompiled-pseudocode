/*
 * XREFs of ?IsEqualByHostId@CWin32ApplicationView@@UEAAJ_KPEAH@Z @ 0x180050600
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z @ 0x180050660 (-GetHostId@CWin32ApplicationView@@UEAAJPEA_K@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::IsEqualByHostId(CWin32ApplicationView *this, __int64 a2, int *a3)
{
  BOOL v4; // ebx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = -1LL;
  v4 = 0;
  *a3 = 0;
  if ( CWin32ApplicationView::GetHostId(this, &v7) >= 0 )
  {
    if ( a2 == v7 )
      v4 = v7 != -1LL;
    *a3 = v4;
  }
  return 0LL;
}
