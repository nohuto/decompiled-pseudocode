/*
 * XREFs of ??1PinRequestContext@@QEAA@XZ @ 0x18069EDA0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VPinRequestContext@@@std@@EEAAXXZ @ 0x1806A8E90 (-_Destroy@-$_Ref_count_obj2@VPinRequestContext@@@std@@EEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall PinRequestContext::~PinRequestContext(PinRequestContext *this)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
    CoTaskMemFree(v4);
  v5 = (void *)*((_QWORD *)this + 1);
  if ( v5 )
    CoTaskMemFree(v5);
  if ( *(_QWORD *)this )
    CoTaskMemFree(*(LPVOID *)this);
}
