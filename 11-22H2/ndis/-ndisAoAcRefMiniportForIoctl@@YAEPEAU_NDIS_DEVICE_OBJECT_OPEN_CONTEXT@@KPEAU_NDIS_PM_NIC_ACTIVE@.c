/*
 * XREFs of ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033610
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0006678 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0022D18 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 */

unsigned __int8 __fastcall ndisAoAcRefMiniportForIoctl(
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a1,
        unsigned int a2,
        struct _NDIS_PM_NIC_ACTIVE *a3,
        char a4,
        enum _NDIS_MP_REFTAG a5,
        int *a6,
        struct _NDIS_MINIPORT_BLOCK **a7)
{
  unsigned __int8 v7; // bl
  struct _NDIS_MINIPORT_BLOCK *v11; // rbp
  unsigned __int8 result; // al
  int v13; // ecx
  union _NET_LUID_LH *v14; // r8
  int v15; // eax
  struct _NDIS_MINIPORT_BLOCK *v16; // rax
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  int v18; // eax
  KIRQL v19; // dl
  struct _NDIS_MINIPORT_AOAC *v20; // r14
  struct _NDIS_MINIPORT_AOAC **v21; // rax

  v7 = 0;
  v11 = 0LL;
  if ( !*(_BYTE *)a1 )
  {
    *a6 = -1073741790;
    goto LABEL_6;
  }
  if ( a2 < 0x14 )
  {
    *a6 = -1073741789;
    goto LABEL_6;
  }
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    if ( !ndisValidComponentId(*((_DWORD *)a3 + 4)) )
    {
      *a6 = -1073741811;
      goto LABEL_6;
    }
    if ( *((_BYTE *)a1 + 40) )
    {
      *a6 = -1073741130;
      goto LABEL_6;
    }
    v15 = *((_DWORD *)a1 + 6);
    if ( v15 != v13 && (v15 || !a4) )
    {
      *a6 = -1073741816;
      goto LABEL_6;
    }
    v16 = ndisReferenceMiniportByNetLuid(v14[1], a5);
    v11 = v16;
    if ( !v16 )
    {
      *a6 = -1071448058;
      goto LABEL_6;
    }
    AoAc = v16->AoAc;
    if ( !AoAc )
    {
      v18 = -1071447877;
LABEL_29:
      *a6 = v18;
      ndisDereferenceMiniport(v11, a5);
      v11 = 0LL;
      goto LABEL_6;
    }
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v16->AoAc);
    if ( *((_DWORD *)a1 + 6) || !a4 )
    {
      if ( *((struct _NDIS_MINIPORT_BLOCK **)a1 + 4) != v11 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v19);
        v18 = -1073741816;
        goto LABEL_29;
      }
    }
    else
    {
      *((_DWORD *)a1 + 6) = *((_DWORD *)a3 + 4);
      *((_QWORD *)a1 + 4) = v11;
      v20 = (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)((char *)a1 + 8);
      v21 = (struct _NDIS_MINIPORT_AOAC **)*((_QWORD *)AoAc + 2);
      if ( *v21 != (struct _NDIS_MINIPORT_AOAC *)((char *)AoAc + 8) )
        __fastfail(3u);
      *(_QWORD *)v20 = (char *)AoAc + 8;
      *((_QWORD *)v20 + 1) = v21;
      *v21 = v20;
      *((_QWORD *)AoAc + 2) = v20;
      ++*((_DWORD *)AoAc + 6);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v19);
    v7 = 1;
    goto LABEL_6;
  }
  *a6 = 0;
LABEL_6:
  result = v7;
  *a7 = v11;
  return result;
}
