/*
 * XREFs of ?CreateIconFromBitmap@@YAJIPEAUHBITMAP__@@PEAPEAUHICON__@@@Z @ 0x1802EBC98
 * Callers:
 *     ?CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z @ 0x18005B51C (-CreateIconFromStreamWithWIC@@YAJPEAUIWICImagingFactory@@PEAUIStream@@I_NPEAPEAUHICON__@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _GetProcFromComCtl32 @ 0x180391084 (_GetProcFromComCtl32.c)
 */

__int64 __fastcall CreateIconFromBitmap(unsigned int a1, HBITMAP a2, HICON *a3)
{
  __int64 (__fastcall *v4)(GUID *, _QWORD, GUID *, __int64 *); // rax
  int v7; // ebx
  _BYTE pv[56]; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+90h] [rbp+18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF

  *a3 = 0LL;
  v4 = (__int64 (__fastcall *)(GUID *, _QWORD, GUID *, __int64 *))qword_18098C430;
  if ( qword_18098C430 == -1 )
  {
    GetProcFromComCtl32(&qword_18098C430, "ImageList_CoCreateInstance");
    v4 = (__int64 (__fastcall *)(GUID *, _QWORD, GUID *, __int64 *))qword_18098C430;
  }
  if ( v4 )
  {
    v7 = v4(&CLSID_ImageList, 0LL, &GUID_192b9d83_50fc_457b_90a0_2b82a8b5dae1, &v11);
    if ( v7 >= 0 )
    {
      if ( GetObjectW(a2, 32, pv) )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, int, int))(*(_QWORD *)v11 + 328LL))(
               v11,
               a1,
               a1,
               196640LL,
               1,
               1);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, HBITMAP, _QWORD, unsigned int *))(*(_QWORD *)v11 + 24LL))(
                 v11,
                 a2,
                 0LL,
                 &v10);
          if ( v7 >= 0 )
            v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, HICON *))(*(_QWORD *)v11 + 80LL))(
                   v11,
                   v10,
                   0LL,
                   a3);
        }
      }
      else
      {
        v7 = -2147467259;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return (unsigned int)v7;
}
