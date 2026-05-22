/*
 * XREFs of ?QueryInterface@CSurfaceFactory@DirectComposition@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800876D0
 * Callers:
 *     ?QueryInterface@CSurfaceFactory@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9170 (-QueryInterface@CSurfaceFactory@DirectComposition@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ @ 0x180030190 (-AddRef@CSurfaceFactory@DirectComposition@@UEAAKXZ.c)
 */

__int64 __fastcall DirectComposition::CSurfaceFactory::QueryInterface(
        DirectComposition::CSurfaceFactory *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v9; // rax

  v3 = 0;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e334bc12_3937_4e02_85eb_fcf4eb30d2c8.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e334bc12_3937_4e02_85eb_fcf4eb30d2c8.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e334bc12_3937_4e02_85eb_fcf4eb30d2c8.Data4;
    if ( !v4 )
      goto LABEL_14;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_6c530579_f7b7_4884_aaae_b1d41668525d.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6c530579_f7b7_4884_aaae_b1d41668525d.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_6c530579_f7b7_4884_aaae_b1d41668525d.Data4;
    if ( !v5 )
      goto LABEL_14;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_380a04f1_bb59_4c8d_ae04_afdb727a42e7.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_380a04f1_bb59_4c8d_ae04_afdb727a42e7.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_380a04f1_bb59_4c8d_ae04_afdb727a42e7.Data4;
    if ( !v6 )
      goto LABEL_14;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9c87de30_0ec3_4db5_8974_836d332e5379.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9c87de30_0ec3_4db5_8974_836d332e5379.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9c87de30_0ec3_4db5_8974_836d332e5379.Data4;
    if ( !v7 )
      goto LABEL_14;
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v9 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_14:
      *a3 = this;
      DirectComposition::CSurfaceFactory::AddRef(this);
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
