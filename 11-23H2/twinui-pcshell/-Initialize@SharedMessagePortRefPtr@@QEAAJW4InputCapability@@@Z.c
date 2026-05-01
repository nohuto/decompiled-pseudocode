/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1800AC3F4
 * Callers:
 *     ??0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEAUIShellKeyboardHostingPolicy@3456@PEAUIDesktopKeyboardHostingPolicy@1456@@Z @ 0x1800ABDB0 (--0TabTipAdapter@KeyboardHosting@@QEAA@PEAUIInputExperienceHost@Text@Shell@Internal@Windows@@PEA.c)
 * Callees:
 *     ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x1800AC558 (-Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x1800AC5AC (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1807382E8 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(SharedMessagePortRefPtr *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  __int64 (__fastcall *v11)(struct IMessagePortStore *, unsigned __int64, HLOCAL, char *); // rbx
  const wchar_t *v12; // rax
  const wchar_t *v13; // rdx
  int v14; // ecx
  int v16; // r9d
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v19; // [rsp+40h] [rbp-10h]
  struct IMessagePortStore *v20; // [rsp+80h] [rbp+30h] BYREF
  __int64 v21; // [rsp+88h] [rbp+38h] BYREF

  v21 = 0LL;
  v20 = 0LL;
  hMem = 0LL;
  v2 = CoreUIClientCreate(&v21);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_11;
    v16 = 115;
    goto LABEL_18;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct IMessagePortStore **))(*(_QWORD *)v21 + 48LL))(v21, &v20);
  v6 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_11;
    v16 = 118;
    goto LABEL_18;
  }
  v7 = SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(&hMem);
  v6 = v7 | 0x10000000;
  if ( v7 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(v9, v8, v10, 121, v7);
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(struct IMessagePortStore *, unsigned __int64, HLOCAL, char *))(*(_QWORD *)v20 + 24LL);
    v12 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v13 = L"Input\\Core.AlpcPort\\Server";
      v19 = L"Input\\Core.AlpcPort\\Server";
      v14 = 0;
      while ( *v12 )
      {
        ++v12;
        ++v14;
      }
      v18 = v14 | 0x80000000;
    }
    else
    {
      v13 = 0LL;
      v19 = 0LL;
    }
    v2 = v11(v20, (unsigned __int64)&v18 & -(__int64)(v13 != 0LL), hMem, (char *)a1 + 8);
    v6 = v2;
    if ( v2 >= 0 )
    {
      SharedMessagePortRefPtr::Assign(a1, v20);
      goto LABEL_11;
    }
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    {
      v16 = 126;
LABEL_18:
      McTemplateU0sqq_EventWriteTransfer(v4, v3, v5, v16, v2);
    }
  }
LABEL_11:
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  if ( v20 )
  {
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)v20 + 16LL))(v20);
    v20 = 0LL;
  }
  LocalFree(hMem);
  return v6;
}
