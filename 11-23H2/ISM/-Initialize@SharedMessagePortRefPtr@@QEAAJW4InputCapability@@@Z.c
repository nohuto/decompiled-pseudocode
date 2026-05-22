/*
 * XREFs of ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801F341C
 * Callers:
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801F2A28 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801B5678 (McTemplateU0sqq_EventWriteTransfer.c)
 *     ?Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z @ 0x1801F33B4 (-Assign@SharedMessagePortRefPtr@@IEAAPEAUIMessagePortStore@@PEAU2@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x1801F3660 (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 */

__int64 __fastcall SharedMessagePortRefPtr::Initialize(SharedMessagePortRefPtr *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(struct IMessagePortStore *, unsigned __int64, HLOCAL, char *); // rbx
  const wchar_t *v11; // rax
  const wchar_t *v12; // rdx
  int v13; // ecx
  HLOCAL hMem; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v17; // [rsp+40h] [rbp-10h]
  struct IMessagePortStore *v18; // [rsp+80h] [rbp+30h] BYREF
  __int64 v19; // [rsp+88h] [rbp+38h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  hMem = 0LL;
  v2 = CoreUIClientCreate(&v19);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 113LL;
LABEL_4:
    McTemplateU0sqq_EventWriteTransfer(v4, v3, "SharedMessagePortRefPtr::Initialize", v6, v2);
    goto LABEL_22;
  }
  v2 = (*(__int64 (__fastcall **)(__int64, struct IMessagePortStore **))(*(_QWORD *)v19 + 48LL))(v19, &v18);
  v5 = v2;
  if ( v2 < 0 )
  {
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 116LL;
    goto LABEL_4;
  }
  v7 = SharedMessagePortRefPtr::SecurityShim_SharedMessagePortSecurity(&hMem);
  v5 = v7 | 0x10000000;
  if ( v7 >= 0 )
  {
    v10 = *(__int64 (__fastcall **)(struct IMessagePortStore *, unsigned __int64, HLOCAL, char *))(*(_QWORD *)v18 + 24LL);
    v11 = L"Input\\Core.AlpcPort\\Server";
    if ( L"Input\\Core.AlpcPort\\Server" )
    {
      v12 = L"Input\\Core.AlpcPort\\Server";
      v17 = L"Input\\Core.AlpcPort\\Server";
      v13 = 0;
      while ( *v11 )
      {
        ++v11;
        ++v13;
      }
      v16 = v13 | 0x80000000;
    }
    else
    {
      v12 = 0LL;
      v17 = 0LL;
    }
    v2 = v10(v18, (unsigned __int64)&v16 & -(__int64)(v12 != 0LL), hMem, (char *)a1 + 8);
    v5 = v2;
    if ( v2 >= 0 )
    {
      SharedMessagePortRefPtr::Assign(a1, v18);
      goto LABEL_22;
    }
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
      goto LABEL_22;
    v6 = 124LL;
    goto LABEL_4;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
    McTemplateU0sqq_EventWriteTransfer(v9, v8, "SharedMessagePortRefPtr::Initialize", 119LL, v7);
LABEL_22:
  if ( v19 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    v19 = 0LL;
  }
  if ( v18 )
  {
    (*(void (__fastcall **)(struct IMessagePortStore *))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  LocalFree(hMem);
  return v5;
}
