/*
 * XREFs of ndisIfUpdateStringIfNeeded @ 0x1C0132C58
 * Callers:
 *     ndisIfUpdateIfBlockFromPersistedState @ 0x1C0132938 (ndisIfUpdateIfBlockFromPersistedState.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1C00107A4 (WPP_RECORDER_SF_Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x1C0033F78 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     memcmp @ 0x1C0035F50 (memcmp.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C010A91C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

char __fastcall ndisIfUpdateStringIfNeeded(const wchar_t *a1, const void **a2, unsigned __int16 *a3, int a4, int a5)
{
  unsigned int v5; // edi
  size_t v10; // rbp
  unsigned int *v11; // rax
  unsigned __int16 v12; // ax
  _DWORD v14[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 *v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+44h] [rbp-24h]

  v5 = *(unsigned __int16 *)a2;
  v10 = *(unsigned __int16 *)a2;
  if ( (_WORD)v5 != *a3 || (LODWORD(v11) = memcmp(a2[1], a3 + 1, *(unsigned __int16 *)a2), (_DWORD)v11) )
  {
    if ( ndisIsValidIfStringParts(a1, v5) )
    {
      memmove(a3 + 1, a2[1], v10);
      v12 = *(_WORD *)a2;
      v14[1] = 0;
      *a3 = v12;
      v17 = a5;
      v14[0] = a4;
      v15 = a3;
      v16 = 516;
      LOBYTE(v11) = ndisNsiNotifyClientInterfaceChange((__int64)a1, 0, (__int64)v14, 0);
    }
    else
    {
      v11 = &WPP_RECORDER_INITIALIZED;
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        LOBYTE(v11) = WPP_RECORDER_SF_Z(
                        *((_QWORD *)WPP_GLOBAL_Control + 8),
                        3u,
                        0x16u,
                        0x10u,
                        (struct _GUID *)&WPP_3bc756b3e3313898ba315478217523d2_Traceguids,
                        (unsigned __int16 *)a2);
    }
  }
  return (char)v11;
}
