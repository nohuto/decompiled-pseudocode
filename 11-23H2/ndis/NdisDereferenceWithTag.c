/*
 * XREFs of NdisDereferenceWithTag @ 0x1C000CEA0
 * Callers:
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000ABC0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C000D8D0 (-ndisDereferenceMiniportForNsi@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_NSI_REFTAG@@W4_NDIS_MP_REFT.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000FE40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001C3A4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z @ 0x1C001F3B0 (-ndisDereferenceRef@@YAEPEAU_REFERENCE_EX@@E@Z.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001F6C4 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0021544 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0035128 (-ndisIfUpdateInterfaceOnAddDevice@@YAHPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006834C (-ndisDereferenceMiniportRef@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCCC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48F0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49FC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisDereferenceWithTag(ULONG_PTR BugCheckParameter3, unsigned __int8 a2)
{
  int v3; // ecx
  __int64 v4; // r11
  unsigned __int8 v5; // r10
  unsigned __int8 v6; // al
  _BYTE *v7; // r9
  char v8; // cl
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // rbx
  unsigned int v11; // edx
  int v12; // ecx

  if ( BugCheckParameter3 - 2 > 1 )
  {
    if ( BugCheckParameter3 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, BugCheckParameter3, 0LL);
    if ( a2 == 0xFF )
    {
      if ( (*(_BYTE *)BugCheckParameter3 & 2) == 0 )
        ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, 0xFFuLL);
      *(_BYTE *)BugCheckParameter3 &= ~2u;
    }
    else
    {
      if ( a2 >= *(_BYTE *)(BugCheckParameter3 + 2) )
        ndisBugCheckEx(0x1EuLL, 2uLL, BugCheckParameter3, a2);
      v3 = *(unsigned __int8 *)(BugCheckParameter3 + 1);
      if ( v3 )
      {
        if ( v3 == 1 )
        {
          v9 = a2;
          v10 = BugCheckParameter3 + ((unsigned __int64)a2 << 6);
          v11 = *(_DWORD *)(v10 + 64);
          v12 = (unsigned __int16)v11 >> 1;
          if ( v11 >> 17 < 0x3FFE && v12 == (v11 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v10 + 8));
            *(_DWORD *)(v10 + 64) &= 0x10001u;
          }
          else
          {
            if ( v12 == 0 && (v11 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, v9);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v10 + 8), 0);
          }
        }
      }
      else
      {
        v4 = *(_QWORD *)(BugCheckParameter3 + 8);
        if ( v4 && (v5 = *(_BYTE *)(BugCheckParameter3 + 3), v6 = 0, v5) )
        {
          while ( 1 )
          {
            v7 = (_BYTE *)(v4 + 2LL * v6);
            if ( *v7 == a2 )
            {
              v8 = v7[1];
              if ( v8 )
                break;
            }
            if ( ++v6 >= v5 )
              goto LABEL_10;
          }
          v7[1] = v8 - 1;
        }
        else
        {
LABEL_10:
          if ( !_bittestandreset((signed __int32 *)(BugCheckParameter3 + 16), a2) )
            ndisBugCheckEx(0x1EuLL, 0LL, BugCheckParameter3, a2);
        }
      }
    }
  }
}
