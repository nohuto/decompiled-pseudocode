/*
 * XREFs of ??_GCAecAttributes@@UEAAPEAXI@Z @ 0x180105300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ??1CAecAttributes@@UEAA@XZ @ 0x1801051B8 (--1CAecAttributes@@UEAA@XZ.c)
 */

CAecAttributes *__fastcall CAecAttributes::`scalar deleting destructor'(
        CAecAttributes *this,
        struct wil::details::wnf_subscription_state_base *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CAecAttributes::~CAecAttributes(this, a2);
  if ( (v2 & 1) != 0 )
    operator delete(this);
  return this;
}
