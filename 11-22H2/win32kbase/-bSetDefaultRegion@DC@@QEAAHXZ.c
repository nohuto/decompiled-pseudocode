/*
 * XREFs of ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E0090
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreCreateDisplayDC @ 0x1C003BFE0 (GreCreateDisplayDC.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C004B888 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0152020 (-bMakeInfoDC@DC@@QEAAHH@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00329E8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x1C003E000 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1C003ED80 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C00402A0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vStamp@REGION@@QEAAXXZ @ 0x1C00403FC (-vStamp@REGION@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0040814 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C004086C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z @ 0x1C005FDB0 (-vGet_sizlWindow@DC@@QEBAXPEAUtagSIZE@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C008F794 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C00D1650 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 */

__int64 __fastcall DC::bSetDefaultRegion(REGION **this)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  LONG left; // r12d
  LONG cx; // edi
  LONG right; // r15d
  LONG top; // r13d
  REGION *v8; // rbx
  int v9; // ecx
  REGION *v10; // rax
  LONG v11; // edx
  int v12; // eax
  int v13; // eax
  LONG v14; // r15d
  int v15; // eax
  __int64 v16; // r15
  REGION *v17; // rax
  REGION *v18; // rbx
  int v19; // eax
  char v21[8]; // [rsp+20h] [rbp-40h] BYREF
  REGION *v22; // [rsp+28h] [rbp-38h] BYREF
  struct tagSIZE v23; // [rsp+30h] [rbp-30h] BYREF
  __int64 v24; // [rsp+38h] [rbp-28h] BYREF
  LONG v25; // [rsp+40h] [rbp-20h]
  int v26; // [rsp+44h] [rbp-1Ch]
  struct _RECTL v27; // [rsp+48h] [rbp-18h] BYREF

  DC::vReleaseRao((DC *)this);
  v2 = 0;
  v23 = 0LL;
  DC::vGet_sizlWindow((DC *)this, &v23);
  left = 0;
  cx = v23.cx;
  right = v23.cx;
  top = 0;
  v8 = this[6];
  *(struct tagSIZE *)&v27.right = v23;
  *(_QWORD *)&v27.left = 0LL;
  if ( this[62] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
    LODWORD(v22) = *((_DWORD *)v8 + 10);
    v9 = (int)v22;
    if ( ((unsigned __int16)v22 & 0x8000) != 0 )
    {
      v10 = this[62];
      v11 = *((_DWORD *)v10 + 14);
      if ( v11 < cx || *((_DWORD *)v10 + 15) < v23.cy )
      {
        v12 = *((_DWORD *)v10 + 15);
        v25 = v11;
        v24 = 0LL;
        v26 = v12;
        ERECTL::operator*=(&v27.left, (int *)&v24);
        top = v27.top;
        left = v27.left;
        right = v27.right;
        v9 = (int)v22;
      }
    }
    if ( (v9 & 0x20000) != 0 && *((int *)this[62] + 28) < 0 )
    {
      v13 = *((_DWORD *)v8 + 640);
      left += v13;
      v14 = v13 + right;
      v27.left = left;
      v15 = *((_DWORD *)v8 + 641);
      top += v15;
      v27.bottom += v15;
      v27.top = top;
      v27.right = v14;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v21);
  }
  v16 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  DC::AcquireDcVisRgnExclusive((DC *)this, (__int64)&v24);
  v17 = this[142];
  if ( v17 && v17 != *(REGION **)(v16 + 6400) )
  {
    v22 = this[142];
    RGNOBJ::vSet((RGNOBJ *)&v22, &v27);
LABEL_17:
    REGION::vStamp(this[142]);
    if ( (_BYTE)v25 )
      CPushLock::ReleaseLock((CPushLock *)(v24 + 1112));
    *((_DWORD *)this + 261) = v23.cy;
    *((_DWORD *)this + 252) = v27.right;
    *((_DWORD *)this + 253) = v27.bottom;
    this[127] = 0LL;
    this[129] = 0LL;
    *((_DWORD *)this + 260) = cx;
    *((_DWORD *)this + 250) = left;
    *((_DWORD *)this + 251) = top;
    v19 = HIDWORD(this[((_DWORD)this[5] & 1) + 127]);
    if ( ((_DWORD)this[5] & 1) != 0 )
      v2 = *((_DWORD *)this + 256);
    *((_DWORD *)this + 298) = v2;
    v2 = 1;
    *((_DWORD *)this + 299) = v19;
    return v2;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v22);
  v18 = v22;
  if ( v22 )
  {
    RGNOBJ::vSet((RGNOBJ *)&v22, &v27);
    this[142] = v18;
    goto LABEL_17;
  }
  this[142] = *(REGION **)(v16 + 6400);
  if ( (_BYTE)v25 )
    CPushLock::ReleaseLock((CPushLock *)(v24 + 1112));
  return v2;
}
