/*
 * XREFs of ?AllocateConfigurationChange@CInteractionConfiguration@DirectComposition@@SAJAEBUInteractionConfigurationInternal@@PEAPEAXPEA_K@Z @ 0x18002405C
 * Callers:
 *     ?_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUIDCompositionInteractionConfigurationPartner@@W4Enum@InteractionProperty@@@Z @ 0x180024118 (-_ProcessSupportedInteractionConfigurationChange@CInteractionProxy@DirectComposition@@AEAAJPEAUI.c)
 *     ?ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigurationInternal@@AEBW4Enum@InteractionProperty@@@Z @ 0x1800B7666 (-ProcessChange@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJAEBUInteractionConfigu.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfiguration::AllocateConfigurationChange(
        const struct InteractionConfigurationInternal *a1,
        void **a2,
        unsigned __int64 *a3)
{
  HANDLE ProcessHeap; // rax
  unsigned int v7; // edi
  _DWORD *v8; // r9

  ProcessHeap = GetProcessHeap();
  v7 = 0;
  v8 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( !v8 )
    return (unsigned int)-2147024882;
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      *v8 = 2;
    }
    else
    {
      if ( *(_DWORD *)a1 != 2 )
      {
        if ( *(_DWORD *)a1 == 3 )
        {
          *v8 = 4;
        }
        else
        {
          if ( *(_DWORD *)a1 != 4 )
          {
            v7 = -2147467259;
            operator delete(v8);
            return v7;
          }
          *v8 = 5;
        }
        v8[1] = *((_DWORD *)a1 + 1);
        goto LABEL_7;
      }
      *v8 = 3;
    }
  }
  else
  {
    *v8 = 1;
  }
  v8[1] = *((_DWORD *)a1 + 1);
  v8[2] = *((_DWORD *)a1 + 2);
  v8[3] = *((_DWORD *)a1 + 3);
LABEL_7:
  *a2 = v8;
  *a3 = 16LL;
  return v7;
}
