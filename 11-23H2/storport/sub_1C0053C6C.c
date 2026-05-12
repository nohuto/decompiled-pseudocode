/*
 * XREFs of sub_1C0053C6C @ 0x1C0053C6C
 * Callers:
 *     sub_1C0006CB0 @ 0x1C0006CB0 (sub_1C0006CB0.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0010EE0 @ 0x1C0010EE0 (sub_1C0010EE0.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C0050984 @ 0x1C0050984 (sub_1C0050984.c)
 *     sub_1C0059E34 @ 0x1C0059E34 (sub_1C0059E34.c)
 */

__int64 __fastcall sub_1C0053C6C(__int64 a1, IRP *a2)
{
  bool v2; // zf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v6; // r8d
  struct _IRP *MasterIrp; // rbx
  int v8; // eax
  int v9; // r14d
  char v10; // r11
  __int64 v11; // r9
  const wchar_t *v12; // rax
  __int64 v13; // r10
  int v14; // r9d
  const wchar_t *v15; // rdi
  int v17; // [rsp+B0h] [rbp-68h]
  __int128 v18; // [rsp+B8h] [rbp-60h] BYREF
  char v19[32]; // [rsp+C8h] [rbp-50h] BYREF

  a2->IoStatus.Information = 0LL;
  v2 = a2->AssociatedIrp.MasterIrp == 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v18 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( v2 )
  {
    v6 = -1073741811;
  }
  else if ( CurrentStackLocation->Parameters.Read.Length >= 0x34 )
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 456), 3u) == 1 )
    {
      v6 = -2147483631;
    }
    else
    {
      MasterIrp = a2->AssociatedIrp.MasterIrp;
      memset_0(MasterIrp, 0, CurrentStackLocation->Parameters.Read.Length);
      v8 = sub_1C0059E34(a1, MasterIrp, v19);
      v6 = v8;
      if ( v8 >= 0 )
        a2->IoStatus.Information = 52LL;
      *(_DWORD *)(a1 + 456) &= ~8u;
      v9 = v8;
      if ( v8 < 0 )
      {
        v17 = *(_DWORD *)(a1 + 96);
        sub_1C0010EE0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), (__int64)&v18);
        v6 = v9;
        v11 = *(_QWORD *)(a1 + 24);
        if ( (byte_1C0093A07 & 4) != 0 )
        {
          v12 = *(const wchar_t **)(v11 + 5016);
          v13 = v11 + 5000;
          v14 = *(_DWORD *)(v11 + 56);
          v15 = (const wchar_t *)&unk_1C0082788;
          if ( v12 )
            v15 = v12;
          sub_1C0050984(
            a1 + 186,
            a1 + 169,
            a1 + 160,
            v14,
            v10,
            SBYTE1(v17),
            SBYTE2(v17),
            a1 + 2024,
            v13,
            *((const wchar_t **)&v18 + 1),
            (const char *)(a1 + 160),
            (const char *)(a1 + 169),
            (const char *)(a1 + 186),
            v15,
            "TcgQueryCapabilityConfiguration",
            v19,
            v9,
            (*(_BYTE *)(a1 + 451) & 0x40) != 0,
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
