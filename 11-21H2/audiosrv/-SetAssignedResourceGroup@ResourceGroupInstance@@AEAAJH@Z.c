/*
 * XREFs of ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x18010DE0C
 * Callers:
 *     ??0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z @ 0x180109910 (--0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z.c)
 *     ??1ResourceGroupInstance@@UEAA@XZ @ 0x180109CF8 (--1ResourceGroupInstance@@UEAA@XZ.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceGroupInstance::SetAssignedResourceGroup(ResourceGroupInstance *this, int a2)
{
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+40h] [rbp-248h] BYREF
  GUID v6; // [rsp+48h] [rbp-240h] BYREF
  int v7; // [rsp+58h] [rbp-230h]
  int v8; // [rsp+5Ch] [rbp-22Ch]
  int v9; // [rsp+60h] [rbp-228h] BYREF
  char v10[524]; // [rsp+64h] [rbp-224h] BYREF

  memset_0(v10, 0, 0x200uLL);
  v9 = a2;
  result = StringCchCopyW(v10, 256LL, (char *)this + 32);
  v7 = 0;
  v8 = 2;
  v6 = GUID_d0b305e1_b2cc_484c_8f23_e5d28ad9cf88;
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64, int *, int, _BYTE *))(**((_QWORD **)this + 68) + 24LL))(
             *((_QWORD *)this + 68),
             &v6,
             24LL,
             &v9,
             516,
             v5);
  return result;
}
