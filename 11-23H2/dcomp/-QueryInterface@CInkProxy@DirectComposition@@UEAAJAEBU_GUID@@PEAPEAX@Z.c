/*
 * XREFs of ?QueryInterface@CInkProxy@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F8D50
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall DirectComposition::CInkProxy::QueryInterface(
        DirectComposition::CInkProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( !a3 )
  {
    v3 = -2147024809;
    v4 = 18;
    v5 = -2147024809;
LABEL_11:
    DoStackCaptureDirect(v5, v4);
    return v3;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b09044_12cd_4662_8ef2_533864a34974.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b09044_12cd_4662_8ef2_533864a34974.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b09044_12cd_4662_8ef2_533864a34974.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v7 )
    {
      v5 = -2147467262;
      *a3 = 0LL;
      v3 = -2147467262;
      v4 = 32;
      goto LABEL_11;
    }
  }
  *a3 = this;
  _InterlockedIncrement((volatile signed __int32 *)this + 2);
  return v3;
}
