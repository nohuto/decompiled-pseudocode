/*
 * XREFs of ?ndisMiniportPreRemoveWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1C008EE88
 * Callers:
 *     ?ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090680 (-ndisOidPrePMRemoveWOLPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0090C70 (-ndisOidPreRemoveWakeUpPattern@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C008D994 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisMiniportPreRemoveWOLPattern(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int8 *a3)
{
  void *OidSourceHandle; // rax
  _BYTE *v4; // r8
  __int64 v5; // rdx
  _DWORD *v6; // rdx
  void *v7; // r11
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 result; // rax
  _QWORD *v11; // r9
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx

  OidSourceHandle = ndisGetOidSourceHandle(a2);
  v6 = *(_DWORD **)(v5 + 40);
  v7 = OidSourceHandle;
  v9 = *(__int64 **)(v8 + 968);
  result = 0LL;
  *v4 = 0;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_5;
    if ( *((_DWORD *)v9 + 49) == *v6 )
      break;
    v9 = (__int64 *)*v9;
  }
  v11 = v9 + 1;
  v12 = v11;
  if ( !v11 )
    goto LABEL_5;
  do
  {
    v13 = v12 - 1;
    if ( (void *)v12[2] == v7 )
      break;
    v12 = (_QWORD *)*v12;
    v13 = 0LL;
  }
  while ( v12 );
  if ( !v13 )
  {
LABEL_5:
    result = 3221291035LL;
LABEL_6:
    *v4 = 1;
    return result;
  }
  if ( *v11 )
    goto LABEL_6;
  return result;
}
