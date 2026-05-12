/*
 * XREFs of sub_1C003A010 @ 0x1C003A010
 * Callers:
 *     sub_1C0039770 @ 0x1C0039770 (sub_1C0039770.c)
 * Callees:
 *     sub_1C0007798 @ 0x1C0007798 (sub_1C0007798.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C000889C @ 0x1C000889C (sub_1C000889C.c)
 *     sub_1C0008914 @ 0x1C0008914 (sub_1C0008914.c)
 *     sub_1C001A364 @ 0x1C001A364 (sub_1C001A364.c)
 *     sub_1C00230AC @ 0x1C00230AC (sub_1C00230AC.c)
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 *     sub_1C0032538 @ 0x1C0032538 (sub_1C0032538.c)
 *     sub_1C00343A0 @ 0x1C00343A0 (sub_1C00343A0.c)
 *     sub_1C0035198 @ 0x1C0035198 (sub_1C0035198.c)
 *     sub_1C003C4E0 @ 0x1C003C4E0 (sub_1C003C4E0.c)
 *     sub_1C003D994 @ 0x1C003D994 (sub_1C003D994.c)
 *     sub_1C003E09C @ 0x1C003E09C (sub_1C003E09C.c)
 *     sub_1C003ECD8 @ 0x1C003ECD8 (sub_1C003ECD8.c)
 *     sub_1C003EDC4 @ 0x1C003EDC4 (sub_1C003EDC4.c)
 *     sub_1C0043B50 @ 0x1C0043B50 (sub_1C0043B50.c)
 *     sub_1C0067B7C @ 0x1C0067B7C (sub_1C0067B7C.c)
 *     sub_1C0067C04 @ 0x1C0067C04 (sub_1C0067C04.c)
 *     sub_1C0067C80 @ 0x1C0067C80 (sub_1C0067C80.c)
 *     sub_1C0067D10 @ 0x1C0067D10 (sub_1C0067D10.c)
 *     sub_1C00A0844 @ 0x1C00A0844 (sub_1C00A0844.c)
 *     sub_1C00AA1FC @ 0x1C00AA1FC (sub_1C00AA1FC.c)
 *     sub_1C00ACAB4 @ 0x1C00ACAB4 (sub_1C00ACAB4.c)
 *     sub_1C00ACFB0 @ 0x1C00ACFB0 (sub_1C00ACFB0.c)
 */

__int64 __fastcall sub_1C003A010(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // cl
  int v9; // edx
  int v10; // eax
  KIRQL v11; // al
  KIRQL v12; // si
  int v13; // edi
  unsigned __int8 (__fastcall *v14)(__int64); // rax
  PVOID *v15; // rdi
  int v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+28h] [rbp-50h]

  if ( !a2 )
    return 3221225486LL;
  v5 = (__int64 *)(a1 + 336);
  result = sub_1C00AA1FC(a1 + 336, a2, a3, a1 + 320);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 1936);
  *(_BYTE *)(a1 + 4306) = 1;
  result = sub_1C0043B50(v5, v6);
  *(_BYTE *)(a1 + 108) |= 0x40u;
  if ( (int)result < 0 )
    return result;
  LOBYTE(v7) = byte_1C0093BE8;
  sub_1C0067C04(a1, v7);
  sub_1C0067D10(a1);
  sub_1C0067C80(a1);
  sub_1C0067B7C(a1);
  if ( !*(_DWORD *)(a1 + 808) )
  {
    if ( *(_BYTE *)(a1 + 488) == 2 )
    {
      if ( *(_QWORD *)(a1 + 4224) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4224) = -1LL;
      *(_QWORD *)(a1 + 4240) = 0x100000000LL;
      goto LABEL_14;
    }
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 488) - 3 <= 1 )
    {
      if ( *(_QWORD *)(a1 + 4224) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4224) = -1LL;
      *(_QWORD *)(a1 + 4240) = 0LL;
LABEL_14:
      *(_QWORD *)(a1 + 4256) = -1LL;
    }
  }
  v8 = *(_BYTE *)(a1 + 540);
  v9 = *(_DWORD *)(a1 + 492);
  *(_DWORD *)(a1 + 752) = v9;
  *(_BYTE *)(a1 + 4306) = v8 == 0;
  if ( v8 )
  {
    v12 = 0;
    goto LABEL_24;
  }
  v10 = *(_DWORD *)(a1 + 504);
  *(_BYTE *)(a1 + 107) &= ~1u;
  *(_DWORD *)(a1 + 4272) = v10;
  if ( v10 )
  {
    *(_BYTE *)(a1 + 4304) = 1;
    if ( !v9 )
      v10 = 1;
    *(_DWORD *)(a1 + 4272) = v10;
  }
  result = sub_1C0035198(a1);
  if ( (int)result >= 0 )
  {
    result = sub_1C003D994(a1);
    if ( (int)result >= 0 )
    {
      v11 = sub_1C000889C(a1);
      *(_BYTE *)(a1 + 107) |= 1u;
      v12 = v11;
LABEL_24:
      *(_BYTE *)(a1 + 104) |= 0x10u;
      v13 = sub_1C00343A0((__int64)v5);
      if ( v13 >= 0 )
        *(_BYTE *)(a1 + 104) |= 1u;
      if ( *(_BYTE *)(a1 + 4306) )
        sub_1C0008914(a1, v12);
      if ( v13 >= 0 )
      {
        v14 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4264);
        if ( !v14 || v14(*(_QWORD *)(a1 + 576) + 16LL) )
        {
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          sub_1C003C4E0(a1);
          if ( (unsigned int)sub_1C0007798(*v5, 23) )
            sub_1C001A364((__int64)v5);
          if ( (unsigned int)sub_1C00230AC()
            && *(char *)(a1 + 110) >= 0
            && (*(_DWORD *)(a1 + 564) & 0x80u) != 0
            && (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 188LL) & 2) != 0 )
          {
            sub_1C00A0844(a1);
          }
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 568) + 184LL) & 0x4000) != 0 )
          {
            v15 = (PVOID *)(a1 + 5912);
            if ( *(char *)(a1 + 110) >= 0 || !*v15 )
              *v15 = (PVOID)sub_1C0007CF4(64LL, 4096LL, 1229152594LL, *(_QWORD *)(a1 + 8));
            if ( *v15 && (int)sub_1C00ACAB4(a1, 0, 0, 1, v16, v17, 0, *v15) < 0 && *v15 )
            {
              ExFreePoolWithTag(*v15, 0x49436152u);
              *v15 = 0LL;
            }
            if ( byte_1C0093AE6 && (int)sub_1C00ACFB0(a1, 0LL) >= 0 && *(_QWORD *)(a1 + 5968) )
            {
              if ( (unsigned __int8)sub_1C003EDC4() )
              {
                *(_BYTE *)(a1 + 111) |= 1u;
                if ( (int)sub_1C003ECD8(a1) >= 0 )
                  *(_BYTE *)(a1 + 111) |= 2u;
              }
              sub_1C003E09C(a1);
            }
          }
          return sub_1C0032538(a1);
        }
        else
        {
          return 3221225473LL;
        }
      }
      else
      {
        return (unsigned int)v13;
      }
    }
  }
  return result;
}
