/*
 * XREFs of ?HrFindInterface@CGDIBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DD000 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CGDIBitmapRealization::HrFindInterface(
        CGDIBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax
  char *v6; // rax
  __int64 v8; // rax

  v3 = -2147024809;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_360f17f1_1aef_46a7_97ac_b5cc426e0309.Data4;
    if ( !v4 )
    {
      v6 = (char *)(((unsigned __int64)this + 400) & -(__int64)(this != 0LL));
LABEL_10:
      *a3 = v6;
      return 0;
    }
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( !v5 )
    {
      if ( this )
        v6 = (char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16;
      else
        v6 = 0LL;
      goto LABEL_10;
    }
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_178d0f24_35be_4a99_bb8d_0ce831b03f8c.Data4;
    if ( v8 )
    {
      return (unsigned int)CBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else
    {
      v3 = *((_BYTE *)this + 313) == 0 ? 0x80004002 : 0;
      *a3 = (void *)(((unsigned __int64)this + 360) & -(__int64)(*((_BYTE *)this + 313) != 0));
    }
  }
  return v3;
}
