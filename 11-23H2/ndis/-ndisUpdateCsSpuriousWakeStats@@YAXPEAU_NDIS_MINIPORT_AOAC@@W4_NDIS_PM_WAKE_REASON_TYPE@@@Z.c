/*
 * XREFs of ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C005A69C
 * Callers:
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0058670 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0059B6C (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateCsSpuriousWakeStats(struct _NDIS_MINIPORT_AOAC *a1, unsigned int a2)
{
  if ( a2 <= 0x2000 )
  {
    switch ( a2 )
    {
      case 0x2000u:
        ++*((_DWORD *)a1 + 258);
        return;
      case 0u:
        ++*((_DWORD *)a1 + 250);
        return;
      case 1u:
        ++*((_DWORD *)a1 + 251);
        return;
      case 2u:
        ++*((_DWORD *)a1 + 252);
        return;
      case 3u:
        ++*((_DWORD *)a1 + 253);
        return;
      case 0x1000u:
        ++*((_DWORD *)a1 + 254);
        return;
      case 0x1001u:
        ++*((_DWORD *)a1 + 255);
        return;
      case 0x1002u:
        ++*((_DWORD *)a1 + 256);
        return;
      case 0x1003u:
        ++*((_DWORD *)a1 + 257);
        return;
    }
    goto LABEL_27;
  }
  switch ( a2 )
  {
    case 0x2001u:
      ++*((_DWORD *)a1 + 259);
      break;
    case 0x2002u:
      ++*((_DWORD *)a1 + 260);
      break;
    case 0x2004u:
      ++*((_DWORD *)a1 + 261);
      break;
    case 0x2005u:
      ++*((_DWORD *)a1 + 262);
      break;
    case 0xFFFDu:
      ++*((_DWORD *)a1 + 265);
      break;
    case 0xFFFEu:
      ++*((_DWORD *)a1 + 264);
      break;
    case 0xFFFFu:
      ++*((_DWORD *)a1 + 263);
      break;
    default:
LABEL_27:
      ++*((_DWORD *)a1 + 266);
      *((_DWORD *)a1 + 267) = a2;
      return;
  }
}
