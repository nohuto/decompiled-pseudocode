/*
 * XREFs of sub_1C0051BF4 @ 0x1C0051BF4
 * Callers:
 *     sub_1C0007400 @ 0x1C0007400 (sub_1C0007400.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C0059E34 @ 0x1C0059E34 (sub_1C0059E34.c)
 */

__int64 __fastcall sub_1C0051BF4(__int64 a1, IRP *a2)
{
  bool v2; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // r8d
  struct _IRP *MasterIrp; // rdi
  int v8; // eax
  unsigned int v9; // edi
  const wchar_t *v10; // rcx
  __int128 v12; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v13; // [rsp+C8h] [rbp-50h] BYREF
  char v14[32]; // [rsp+D8h] [rbp-40h] BYREF

  a2->IoStatus.Information = 0LL;
  v2 = a2->AssociatedIrp.MasterIrp == 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v13 = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( v2 )
  {
    v6 = -1073741811;
  }
  else if ( CurrentStackLocation->Parameters.Read.Length >= 0x34 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 0) == 1 )
    {
      v6 = -2147483631;
    }
    else
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      v8 = sub_1C0059E34(a1, MasterIrp, v14);
      v6 = v8;
      if ( v8 >= 0 )
        a2->IoStatus.Information = 52LL;
      *(_DWORD *)(a1 + 128) &= ~1u;
      v9 = v8;
      if ( v8 < 0 )
      {
        sub_1C0010EE0(*(_QWORD *)(a1 + 16), (__int64)&v12);
        v6 = v9;
        if ( (byte_1C0093A07 & 4) != 0 )
        {
          v10 = (const wchar_t *)&unk_1C0082788;
          if ( *(_QWORD *)(a1 + 5016) )
            v10 = *(const wchar_t **)(a1 + 5016);
          sub_1C0050984(
            (__int64)v10,
            a1 + 5000,
            v9,
            *(_DWORD *)(a1 + 56),
            -1,
            255,
            255,
            (__int64)&v13,
            a1 + 5000,
            *((const wchar_t **)&v12 + 1),
            byte_1C0082FE6,
            byte_1C0082FE6,
            byte_1C0082FE6,
            v10,
            "TcgQueryCapabilityConfiguration",
            v14,
            v9,
            (*(_BYTE *)(a1 + 111) & 0x10) != 0,
            0,
            0,
            0);
          v6 = v9;
        }
      }
    }
  }
  else
  {
    v6 = -1073741789;
  }
  return sub_1C0003440(a2, 0, v6);
}
