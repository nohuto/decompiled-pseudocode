/*
 * XREFs of sub_1403A0B60 @ 0x1403A0B60
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140231240 @ 0x140231240 (sub_140231240.c)
 *     sub_1402312E0 @ 0x1402312E0 (sub_1402312E0.c)
 *     sub_140256C68 @ 0x140256C68 (sub_140256C68.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402DF880 @ 0x1402DF880 (sub_1402DF880.c)
 *     sub_1403A0D4C @ 0x1403A0D4C (sub_1403A0D4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407FCA70 @ 0x1407FCA70 (sub_1407FCA70.c)
 */

__int64 __fastcall sub_1403A0B60(__int64 a1)
{
  char v2; // r12
  unsigned __int64 v3; // rsi
  __int64 v4; // rdx
  ULONG_PTR v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdx
  ULONG_PTR v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v16; // r15
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // cl
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  struct _KPRCB *v26; // r9
  __int64 v27; // r8
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp-69h]
  ULONG BugCheckCode[4]; // [rsp+50h] [rbp-59h]
  __int128 v30; // [rsp+60h] [rbp-49h]
  __int128 v31; // [rsp+70h] [rbp-39h]
  __int128 v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+90h] [rbp-19h]
  _OWORD v34[3]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = 0;
  memset(v34, 0, sizeof(v34));
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F590);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    *(_OWORD *)BugCheckCode = *(_OWORD *)(a1 + 224);
    v30 = *(_OWORD *)(a1 + 240);
    v31 = *(_OWORD *)(a1 + 256);
    v33 = *(_QWORD *)(a1 + 288);
    v32 = *(_OWORD *)(a1 + 272);
    KeReleaseSpinLockFromDpcLevel(&qword_140C1F590);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v4 = -1LL << ((unsigned __int8)v3 + 1);
          v20 = *((_QWORD *)CurrentPrcb + 4375);
          v21 = ~(unsigned __int16)v4;
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    if ( BugCheckCode[1] == -1 )
    {
      v6 = 0LL;
    }
    else
    {
      v5 = sub_1402DF880(BugCheckCode[1]);
      v6 = v5;
      if ( v5 && (int)sub_1402312E0(v5) >= 0 )
        v2 = 1;
    }
    LOBYTE(v4) = v32;
    v7 = sub_1403A0D4C(v30, v4);
    LOBYTE(v8) = BYTE1(v32);
    v9 = v7;
    v10 = sub_1403A0D4C(*((_QWORD *)&v30 + 1), v8);
    LOBYTE(v11) = BYTE2(v32);
    v12 = v10;
    v13 = sub_1403A0D4C(v31, v11);
    LOBYTE(v14) = BYTE3(v32);
    BugCheckParameter3 = v13;
    BugCheckParameter4 = sub_1403A0D4C(*((_QWORD *)&v31 + 1), v14);
    if ( !*((_QWORD *)&v32 + 1) )
      KeBugCheckEx(BugCheckCode[2], v9, v12, BugCheckParameter3, BugCheckParameter4);
    sub_14042A5E0(v33, BugCheckCode[2]);
    v16 = KeAcquireSpinLockRaiseToDpc(&qword_140C1F590);
    *(_BYTE *)(a1 + 21) = 0;
    sub_140256C68(a1);
    KeReleaseSpinLockFromDpcLevel(&qword_140C1F590);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && (unsigned __int8)v16 <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v16 + 1));
          v25 = *((_QWORD *)v24 + 4375);
          v22 = ((unsigned int)result & *(_DWORD *)(v25 + 20)) == 0;
          *(_DWORD *)(v25 + 20) &= result;
          if ( v22 )
            result = sub_140418E4C(v24);
        }
      }
    }
    __writecr8(v16);
    if ( v2 )
    {
      sub_140231240(v6, (__int64)v34);
      return sub_1407FCA70(v6);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    sub_140256C68(a1);
    KeReleaseSpinLockFromDpcLevel(&qword_140C1F590);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v22 = ((unsigned int)result & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= result;
          if ( v22 )
            result = sub_140418E4C(v26);
        }
      }
    }
    __writecr8(v3);
  }
  return result;
}
