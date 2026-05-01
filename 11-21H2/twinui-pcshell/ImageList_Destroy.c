/*
 * XREFs of ImageList_Destroy @ 0x1802DAE6C
 * Callers:
 *     CreateBitmapFromIcon @ 0x180499364 (CreateBitmapFromIcon.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1?ImageList_Destroy@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18057ADC8 (--1-$unique_storage@U-$resource_policy@PEAU_IMAGELIST@@P6AHPEAU1@@Z$1-ImageList_Destroy@@YAH0@ZU.c)
 * Callees:
 *     _GetProcFromComCtl32 @ 0x1802DB000 (_GetProcFromComCtl32.c)
 */

BOOL __stdcall ImageList_Destroy(HIMAGELIST himl)
{
  __int64 (__fastcall *v1)(HIMAGELIST); // rax

  v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1807B2840;
  if ( qword_1807B2840 == -1 )
  {
    GetProcFromComCtl32(&qword_1807B2840, "ImageList_Destroy");
    v1 = (__int64 (__fastcall *)(HIMAGELIST))qword_1807B2840;
  }
  if ( v1 )
    LODWORD(v1) = v1(himl);
  return (int)v1;
}
