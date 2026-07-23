/*
 * XREFs of sub_1406D5120 @ 0x1406D5120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 */

POBJECT_TYPE *__fastcall sub_1406D5120(_DWORD *a1)
{
  unsigned __int64 v1; // r8
  POBJECT_TYPE *result; // rax
  __int64 v3; // rcx
  int v4; // [rsp+30h] [rbp+10h] BYREF
  _DWORD *v5; // [rsp+38h] [rbp+18h] BYREF

  v4 = *a1;
  v1 = *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v5 = a1;
  result = (POBJECT_TYPE *)qword_140D07490[(unsigned __int8)dword_140D06C0C ^ v1];
  if ( result == (POBJECT_TYPE *)ExActivationObjectType )
  {
    v3 = 40LL;
    return (POBJECT_TYPE *)sub_1406F83A0(v3, &v5, 1LL, &v4);
  }
  if ( result == (POBJECT_TYPE *)ExCoreMessagingObjectType )
  {
    v3 = 36LL;
    return (POBJECT_TYPE *)sub_1406F83A0(v3, &v5, 1LL, &v4);
  }
  if ( result == (POBJECT_TYPE *)ExRawInputManagerObjectType )
  {
    v3 = 30LL;
    return (POBJECT_TYPE *)sub_1406F83A0(v3, &v5, 1LL, &v4);
  }
  if ( result == (POBJECT_TYPE *)ExCompositionObjectType )
  {
    v3 = 21LL;
    return (POBJECT_TYPE *)sub_1406F83A0(v3, &v5, 1LL, &v4);
  }
  if ( result == ExDesktopObjectType )
  {
    v3 = 11LL;
    return (POBJECT_TYPE *)sub_1406F83A0(v3, &v5, 1LL, &v4);
  }
  if ( result == (POBJECT_TYPE *)ExWindowStationObjectType )
  {
    v3 = 14LL;
    return (POBJECT_TYPE *)sub_1406F83A0(v3, &v5, 1LL, &v4);
  }
  return result;
}
