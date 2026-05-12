/*
 * XREFs of RaidUnitHandleSpecialErrorConditions @ 0x1C0016E44
 * Callers:
 *     RaUnitAsyncError @ 0x1C0016C64 (RaUnitAsyncError.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C0017418 (GetSrbScsiData.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qqDDD @ 0x1C0063B78 (WPP_SF_qqDDD.c)
 */

_UNKNOWN **__fastcall RaidUnitHandleSpecialErrorConditions(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax
  __int64 v3; // rbx
  _BYTE *v4; // r8
  unsigned __int8 v5; // r9
  unsigned __int8 v6; // si
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // di
  char v11; // dl
  _BYTE *v12; // rcx
  unsigned int v13; // eax
  unsigned __int64 v14; // rdx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int8 v16; // [rsp+78h] [rbp+10h] BYREF
  _BYTE *v17; // [rsp+80h] [rbp+18h] BYREF

  result = &retaddr;
  v3 = *(_QWORD *)(a2 + 168);
  v4 = 0LL;
  v5 = 0;
  v17 = 0LL;
  v6 = 0;
  v16 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_BYTE *)(v3 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v3 + 20) )
    {
      result = (_UNKNOWN **)GetSrbScsiData(v3, 0, 0, 0, (__int64)&v17, (__int64)&v16);
      v4 = v17;
      v5 = v16;
    }
  }
  else
  {
    v4 = *(_BYTE **)(v3 + 32);
    v5 = *(_BYTE *)(v3 + 11);
  }
  if ( *(char *)(v3 + 3) >= 0 || !v4 || !v5 )
    return result;
  v11 = 0;
  v12 = &v4[v5];
  result = (_UNKNOWN **)(v4 + 8);
  if ( (unsigned __int8)((*v4 & 0x7F) - 114) <= 1u )
  {
    if ( result > (_UNKNOWN **)v12 )
      goto LABEL_20;
    v7 = v4[2];
    v6 = v4[1] & 0xF;
    v8 = v4[3];
  }
  else
  {
    if ( result > (_UNKNOWN **)v12 )
      goto LABEL_20;
    v6 = v4[2] & 0xF;
    v13 = v5;
    if ( (unsigned int)(unsigned __int8)v4[7] + 8 <= v5 )
      v13 = (unsigned __int8)v4[7] + 8;
    v14 = (unsigned __int64)&v4[v13];
    if ( (unsigned __int64)(v4 + 13) <= v14 )
      v7 = v4[12];
    result = (_UNKNOWN **)(v4 + 14);
    if ( (unsigned __int64)(v4 + 14) <= v14 )
      v8 = v4[13];
  }
  v11 = 1;
LABEL_20:
  if ( v11 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
    {
      WPP_SF_qqDDD(WPP_GLOBAL_Control->AttachedDevice, v7, v6, a1, v3, v6, v7, v8);
    }
    result = (_UNKNOWN **)&unk_1C0081480;
    while ( *(_BYTE *)result != v6 || *((_BYTE *)result + 1) != v7 || *((_BYTE *)result + 2) != v8 )
    {
      result += 2;
      if ( !result[1] )
        return result;
    }
    return (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64))result[1])(a1, a2);
  }
  return result;
}
