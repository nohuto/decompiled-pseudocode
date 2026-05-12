/*
 * XREFs of TcglibEalLogCommandStatus @ 0x1C00556E8
 * Callers:
 *     TcglibpMapStatus @ 0x1C00803B0 (TcglibpMapStatus.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C0010550 (RaidDriverGetName.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
 *     McTemplateK0quuujjzssszq_EtwWriteTransfer @ 0x1C0054788 (McTemplateK0quuujjzssszq_EtwWriteTransfer.c)
 */

__int64 __fastcall TcglibEalLogCommandStatus(int *a1, char a2)
{
  int v2; // eax
  const char *v3; // rdi
  int v5; // r11d
  int *v6; // rbx
  const wchar_t *v7; // rsi
  __int64 v8; // r8
  char v9; // r11
  const wchar_t *v10; // rax
  const char *v11; // rdx
  const char *v12; // rcx
  const char *v13; // rdi
  int v15; // [rsp+80h] [rbp-48h]
  __int128 v16; // [rsp+88h] [rbp-40h] BYREF
  __int128 v17; // [rsp+98h] [rbp-30h] BYREF
  __int128 v18; // [rsp+A8h] [rbp-20h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v17 = 0LL;
  v15 = RaidNullAddress;
  v18 = 0LL;
  v16 = 0LL;
  if ( v2 == 1431193940 )
  {
    v5 = a1[24];
    v3 = (const char *)a1;
    v6 = (int *)*((_QWORD *)a1 + 3);
    v18 = *(_OWORD *)(a1 + 506);
    v15 = v5;
  }
  else
  {
    v6 = 0LL;
    if ( v2 == 1094997074 )
      v6 = a1;
  }
  v17 = *(_OWORD *)(v6 + 1250);
  v7 = (const wchar_t *)*((_QWORD *)v6 + 627);
  RaidDriverGetName(*((_QWORD *)v6 + 2), (__int64)&v16);
  if ( (byte_1C0092A03 & 0x20) != 0 )
  {
    v10 = (const wchar_t *)&unk_1C0081788;
    if ( v7 )
      v10 = v7;
    if ( v3 )
    {
      v11 = v3 + 186;
      v12 = v3 + 169;
      v13 = v3 + 160;
    }
    else
    {
      v13 = (const char *)&dword_1C0081784;
      v11 = (const char *)&dword_1C0081784;
      v12 = (const char *)&dword_1C0081784;
    }
    McTemplateK0quuujjzssszq_EtwWriteTransfer(
      (__int64)v12,
      (__int64)v11,
      v8,
      v6[14],
      v9,
      SBYTE1(v15),
      SBYTE2(v15),
      (__int64)&v18,
      (__int64)&v17,
      *((const wchar_t **)&v16 + 1),
      v13,
      v12,
      v11,
      v10,
      a2);
  }
  return 0LL;
}
