/*
 * XREFs of GreValidateVisrgn @ 0x1C004B7A8
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C004B718 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJA@@QEAA@XZ @ 0x1C004B77C (--1DCOBJA@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C00D28F8 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1C00D2BB8 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  bool v6; // bl
  __int64 v7; // [rsp+20h] [rbp-50h]
  char v8; // [rsp+28h] [rbp-48h]
  struct _RECTL v9; // [rsp+30h] [rbp-40h] BYREF
  DC *v10[6]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v11; // [rsp+90h] [rbp+20h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v10, a1);
  if ( v10[0] )
  {
    v3 = *((_DWORD *)v10[0] + 9);
    v4 = v3 | 0x100000;
    v5 = v3 & 0xFFEFFFFF;
    if ( !a2 )
      v4 = v5;
    *((_DWORD *)v10[0] + 9) = v4;
    DC::AcquireDcVisRgnShared(v10[0]);
    v6 = GrepValidateVisRgn(v10[0], *((struct REGION **)v10[0] + 142), (struct ERECTL *)&v9);
    if ( v8 )
      CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    if ( !v6 )
    {
      DC::AcquireDcVisRgnExclusive(v10[0]);
      v11 = *((_QWORD *)v10[0] + 142);
      if ( v11 )
        RGNOBJ::vSet((RGNOBJ *)&v11, &v9);
      if ( v8 )
        CPushLock::ReleaseLock((CPushLock *)(v7 + 1112));
    }
  }
  DCOBJA::~DCOBJA((HDC **)v10);
}
