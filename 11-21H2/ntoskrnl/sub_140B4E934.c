/*
 * XREFs of sub_140B4E934 @ 0x140B4E934
 * Callers:
 *     sub_140B4E580 @ 0x140B4E580 (sub_140B4E580.c)
 *     sub_140B4E7BC @ 0x140B4E7BC (sub_140B4E7BC.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 */

char __fastcall sub_140B4E934(int a1, unsigned int a2, int a3, _DWORD *a4)
{
  _DWORD *v13; // rbx
  _DWORD *v14; // rdi
  __int128 v16; // [rsp+28h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int128 v19; // [rsp+48h] [rbp-28h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+60h] [rbp-10h]

  v20 = 0LL;
  LODWORD(v21) = 0;
  v17 = 0LL;
  LODWORD(v18) = 0;
  v19 = 0LL;
  v16 = 0LL;
  if ( a1 == -1 )
  {
    _RAX = a2;
    __asm { cpuid }
    *a4 = _RAX;
    a4[1] = _RBX;
    a4[2] = _RCX;
    a4[3] = _RDX;
  }
  else
  {
    v13 = sub_14039DF90((PHYSICAL_ADDRESS *)&v19, 1, 0LL, 16LL);
    v14 = sub_14039DF90((PHYSICAL_ADDRESS *)&v16, 2, 0LL, 16LL);
    *v13 = a1;
    v13[1] = 0x10000;
    v13[2] = a2;
    v13[3] = a3;
    HvlInvokeHypercall(136);
    *a4 = *v14;
    a4[1] = v14[1];
    a4[2] = v14[2];
    a4[3] = v14[3];
    sub_14039D8F0((__int64)&v16);
    LOBYTE(_RAX) = sub_14039D8F0((__int64)&v19);
  }
  return _RAX;
}
