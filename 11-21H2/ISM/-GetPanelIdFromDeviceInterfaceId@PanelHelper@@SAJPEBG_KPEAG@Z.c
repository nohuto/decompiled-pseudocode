/*
 * XREFs of ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x1800F9B20
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800CD910 (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x18004AD68 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18004ADD0 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18007E5EC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800CB010 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall PanelHelper::GetPanelIdFromDeviceInterfaceId(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rdi
  int ObjectProperties; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  size_t *v17; // r8
  HRESULT v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v20; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+38h] BYREF

  v20 = a2;
  v5 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_1802437BC > *(_DWORD *)(v5 + 16) )
  {
    Init_thread_header(&dword_1802437BC);
    if ( dword_1802437BC == -1 )
    {
      dword_1802435B4 = 0;
      qword_1802435B8 = 0LL;
      *(DEVPROPKEY *)&byte_1802435A0 = DEVPKEY_Device_InstanceId;
      Init_thread_footer(&dword_1802437BC);
    }
  }
  v21 = 0;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  v7 = ObjectProperties;
  if ( ObjectProperties >= 0 )
  {
    v8 = 0LL;
    if ( v21 )
    {
      while ( 1 )
      {
        v9 = 48 * v8;
        if ( *(_DWORD *)(48 * v8 + 0x10) == 256 )
        {
          v10 = *(_QWORD *)v9 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
          if ( *(_QWORD *)v9 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
            v10 = *(_QWORD *)(48 * v8 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
          if ( !v10 && *(_DWORD *)(48 * v8 + 0x20) == 18 )
          {
            v11 = *(_QWORD *)(48 * v8 + 0x28);
            if ( v11 )
              break;
          }
        }
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v21 )
          goto LABEL_14;
      }
      if ( dword_1802437C0 > *(_DWORD *)(v5 + 16) )
      {
        Init_thread_header(&dword_1802437C0);
        if ( dword_1802437C0 == -1 )
        {
          dword_180243594 = 0;
          qword_180243598 = 0LL;
          *(_OWORD *)&xmmword_180243580 = DEVPKEY_Device_PanelId;
          dword_180243590 = 2;
          Init_thread_footer(&dword_1802437C0);
        }
      }
      LODWORD(v20) = 0;
      v13 = DevGetObjectProperties(3LL, v11, 0LL);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v14 = 0LL;
        if ( (_DWORD)v20 )
        {
          while ( 1 )
          {
            v15 = 48 * v14;
            if ( *(_DWORD *)(48 * v14 + 0x10) == 2 )
            {
              v16 = *(_QWORD *)v15 - DEVPKEY_Device_PanelId;
              if ( *(_QWORD *)v15 == (_QWORD)DEVPKEY_Device_PanelId )
                v16 = *(_QWORD *)(48 * v14 + 8) - *((_QWORD *)&DEVPKEY_Device_PanelId + 1);
              if ( !v16 && *(_DWORD *)(48 * v14 + 0x20) == 18 )
              {
                v17 = *(size_t **)(48 * v14 + 0x28);
                if ( v17 )
                  break;
              }
            }
            v14 = (unsigned int)(v14 + 1);
            if ( (unsigned int)v14 >= (unsigned int)v20 )
              goto LABEL_29;
          }
          v18 = StringCchCopyW(a3, 0x39uLL, v17);
          if ( v18 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x5C,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
              (const char *)(unsigned int)v18,
              (int)&xmmword_180243580);
          return 0;
        }
        else
        {
LABEL_29:
          v7 = -2147467259;
          wil::details::in1diag3::Return_HrMsg(
            retaddr,
            (void *)0x61,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
            (const char *)0x80004005LL,
            (int)"Failed to query panel ID.",
            (const char *)&v20);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
          (const char *)(unsigned int)v13);
      }
    }
    else
    {
LABEL_14:
      v7 = -2147467259;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x37,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
        (const char *)0x80004005LL,
        (int)"Failed to query device instance ID.",
        (const char *)&v21);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)(unsigned int)ObjectProperties);
  }
  return v7;
}
