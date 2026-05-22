/*
 * XREFs of ?GetIids@HomeGestureReadyChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180187910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HomeGestureReadyChangedEventArgs::GetIids(
        HomeGestureReadyChangedEventArgs *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_bdcfcf8e_77ea_47f8_84c6_a7960853116f;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
