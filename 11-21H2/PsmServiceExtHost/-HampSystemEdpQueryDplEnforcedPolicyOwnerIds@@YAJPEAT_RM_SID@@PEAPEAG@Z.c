/*
 * XREFs of ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x180092DF8
 * Callers:
 *     ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A638 (-HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HampSystemEdpQueryDplEnforcedPolicyOwnerIds(PSID Sid, unsigned __int16 **a2)
{
  int v4; // ebx
  unsigned __int16 *v5; // rcx
  unsigned __int16 *v7; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+28h] [rbp-D8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[384]; // [rsp+40h] [rbp-C0h] BYREF

  v7 = 0LL;
  memset_0(v10, 0, 0x176uLL);
  *(_QWORD *)&UnicodeString.Length = 24510464LL;
  UnicodeString.Buffer = (PWSTR)v10;
  RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
  v4 = EdpDplPolicyEnabledForUser(UnicodeString.Buffer, &v8);
  if ( v4 < 0 )
    goto LABEL_4;
  if ( !v8 )
  {
    *a2 = 0LL;
    v4 = 0;
LABEL_4:
    v5 = v7;
    goto LABEL_5;
  }
  v4 = EdpQueryDplEnforcedPolicyOwnerIds(UnicodeString.Buffer, &v7);
  if ( v4 < 0 )
    goto LABEL_4;
  v5 = 0LL;
  *a2 = v7;
  v4 = 0;
  v7 = 0LL;
LABEL_5:
  if ( v5 )
    EdpFree(v5);
  return (unsigned int)v4;
}
