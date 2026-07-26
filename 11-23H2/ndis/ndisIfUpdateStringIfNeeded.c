/*
 * XREFs of ndisIfUpdateStringIfNeeded @ 0x1C013E824
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C013E4F8 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C0026ED8 (WPP_RECORDER_SF_Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0035B08 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memcmp @ 0x1C0038280 (memcmp.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C0111B04 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateStringIfNeeded(const wchar_t *a1, const void **a2, unsigned __int16 *a3, int a4, int a5)
{
  size_t v5; // rsi
  unsigned int *v10; // rax
  unsigned __int16 v11; // ax
  _DWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+44h] [rbp-24h]

  v5 = *(unsigned __int16 *)a2;
  if ( (_WORD)v5 != *a3 || (LODWORD(v10) = memcmp(a2[1], a3 + 1, *(unsigned __int16 *)a2), (_DWORD)v10) )
  {
    if ( ndisIsValidIfStringParts(a1, v5) )
    {
      memmove(a3 + 1, a2[1], v5);
      v11 = *(_WORD *)a2;
      v13[1] = 0;
      *a3 = v11;
      v16 = a5;
      v13[0] = a4;
      v14 = a3;
      v15 = 516;
      LOBYTE(v10) = ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v13, 0);
    }
    else
    {
      v10 = &WPP_RECORDER_INITIALIZED;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        LOBYTE(v10) = WPP_RECORDER_SF_Z(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        0x16u,
                        0x10u,
                        (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
                        (unsigned __int16 *)a2);
    }
  }
  return (char)v10;
}
