/*
 * XREFs of ?UpdateSegments@CGenericInk@DirectComposition@@UEAAJIPEBEIII@Z @ 0x1800F8BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Enter@CDeviceLock@DirectComposition@@QEAAXXZ @ 0x18001B074 (-Enter@CDeviceLock@DirectComposition@@QEAAXXZ.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??1?$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ @ 0x1800273D0 (--1-$CGuard@VCDeviceLock@DirectComposition@@@@QEAA@XZ.c)
 *     ?SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z @ 0x180032AEC (-SetBufferProperty@CResourceProxy@DirectComposition@@QEAAJIPEBX_K@Z.c)
 *     ?SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z @ 0x180063770 (-SetScalarIntegerProperty@CResourceProxy@DirectComposition@@QEAAJI_J@Z.c)
 */

__int64 __fastcall DirectComposition::CGenericInk::UpdateSegments(
        DirectComposition::CGenericInk *this,
        unsigned int a2,
        const unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v8; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edx
  __int64 v15; // rax
  struct DirectComposition::CDevice *v17; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+50h] [rbp+8h] BYREF

  v8 = a2;
  v10 = (*((_QWORD *)this + 3) + 8LL) & -(__int64)(*((_QWORD *)this + 3) != 0LL);
  if ( v10 )
    v11 = v10 - 8;
  else
    v11 = 0LL;
  DirectComposition::CDevice::GetDeviceAndHandleWorker(v11, &v17, (unsigned int *)&v18);
  v18 = (_QWORD *)((char *)v17 + 96);
  DirectComposition::CDeviceLock::Enter((struct DirectComposition::CDevice *)((char *)v17 + 96));
  v12 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
          (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
          1,
          a6);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 71;
    goto LABEL_17;
  }
  if ( (_DWORD)v8 )
  {
    v12 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
            (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
            4,
            v8);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 75;
LABEL_17:
      DoStackCaptureDirect(v12, v14);
      goto LABEL_18;
    }
  }
  if ( a4 )
  {
    v12 = DirectComposition::CResourceProxy::SetBufferProperty(
            (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
            3,
            a3,
            a6 * a4);
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 80;
      goto LABEL_17;
    }
  }
  v12 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
          (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
          2,
          a5);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 83;
    goto LABEL_17;
  }
  v15 = *((_QWORD *)this + 6);
  if ( v15 )
  {
    v12 = DirectComposition::CResourceProxy::SetScalarIntegerProperty(
            (DirectComposition::CResourceProxy *)(*((_QWORD *)this + 3) + 8LL),
            5,
            *(unsigned int *)(*(_QWORD *)v15 + 4LL));
    v13 = v12;
    if ( v12 < 0 )
    {
      v14 = 92;
      goto LABEL_17;
    }
  }
LABEL_18:
  CGuard<DirectComposition::CDeviceLock>::~CGuard<DirectComposition::CDeviceLock>(&v18);
  return v13;
}
