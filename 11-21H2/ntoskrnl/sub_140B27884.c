/*
 * XREFs of sub_140B27884 @ 0x140B27884
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 *     sub_140AFBDF4 @ 0x140AFBDF4 (sub_140AFBDF4.c)
 *     sub_140B020A4 @ 0x140B020A4 (sub_140B020A4.c)
 * Callees:
 *     sub_14022F96C @ 0x14022F96C (sub_14022F96C.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_1403D94C0 @ 0x1403D94C0 (sub_1403D94C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strstr @ 0x1403E0C40 (strstr.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405D0AB4 @ 0x1405D0AB4 (sub_1405D0AB4.c)
 *     EmClientQueryRuleState @ 0x140A47D40 (EmClientQueryRuleState.c)
 */

char __fastcall sub_140B27884(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char result; // al
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v4; // rdx
  __int64 *v5; // rcx
  unsigned __int8 CurrentIrql; // di
  const char *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r10d
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  signed __int32 v22[8]; // [rsp+0h] [rbp-80h] BYREF
  int v23; // [rsp+40h] [rbp-40h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+48h] [rbp-38h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-18h]
  unsigned int v28; // [rsp+70h] [rbp-10h]
  char v29; // [rsp+74h] [rbp-Ch]

  v27 = 0LL;
  v28 = 0;
  v29 = 0;
  v25 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v26 = 0LL;
  if ( (_DWORD)BugCheckParameter2 )
  {
    if ( (_DWORD)BugCheckParameter2 == 1 )
    {
      sub_1402D6B0C((__int64)&unk_140D00B40, 0x1AE831Fu, 0, 0, (__int64)&qword_14000FFC8, 0);
      if ( dword_140D06D30 && byte_140D068E5 )
        byte_140D06889 = 1;
      CurrentPrcb = KeGetCurrentPrcb();
      KeQueryPerformanceCounter(&PerformanceFrequency);
      qword_140D07218 = 5 * PerformanceFrequency.QuadPart;
      v5 = qword_140D088C0;
      *(_BYTE *)(qword_140D088C0[(unsigned int)dword_140C2B1C0] + 33) = 1;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xDuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v5 = (__int64 *)((unsigned int)CurrentIrql + 1);
        v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v4 = (-1LL << (CurrentIrql + 1)) & 0x3FFC;
        *(_DWORD *)(v11 + 20) |= v4;
      }
      *((_BYTE *)CurrentPrcb + 37128) = 1;
      dword_140D31000 = 0;
      sub_14042A5E0(v5, v4);
      sub_14022F96C(0);
      sub_14042A5E0(v13, v12);
      LOBYTE(v14) = 1;
      sub_14042A5E0(v14, v15);
      sub_14042A5E0(0LL, DesiredTime);
      sub_14022F96C(1);
      v16 = DesiredTime;
      dword_140D06938 = v25;
      *((_DWORD *)CurrentPrcb + 9250) = v25;
      *((_DWORD *)CurrentPrcb + 9251) = v16;
      Root = (unsigned __int64)Tree.Root;
      dword_140C2B1C8 = v16;
      dword_140D069B8 = v16;
      dword_140D06984 = v16;
      dword_140C2B5BC = v16;
      if ( ((__int64)Tree.Min & 1) != 0 )
      {
        if ( Tree.Root )
          Root = (unsigned __int64)&Tree ^ (unsigned __int64)Tree.Root;
        else
          Root = 0LL;
      }
      v10 = 0;
      if ( Root )
      {
        while ( 1 )
        {
          if ( v16 >= *(_DWORD *)(Root + 28) )
          {
            v8 = *(_QWORD *)(Root + 8);
            if ( ((__int64)Tree.Min & 1) != 0 )
            {
              if ( !v8 )
              {
LABEL_32:
                v10 = 1;
                break;
              }
              v8 ^= Root;
            }
            if ( !v8 )
              goto LABEL_32;
          }
          else
          {
            v8 = *(_QWORD *)Root;
            if ( ((__int64)Tree.Min & 1) != 0 )
            {
              if ( !v8 )
                break;
              v8 ^= Root;
            }
            if ( !v8 )
              break;
          }
          Root = v8;
        }
      }
      RtlRbInsertNodeEx(&Tree, (PRTL_BALANCED_NODE)Root, v10, &stru_140C2B5A0);
      byte_140C2B5B8 = 1;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v17 = KeGetCurrentIrql();
          if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
          {
            v18 = KeGetCurrentPrcb();
            v19 = *((_QWORD *)v18 + 4375);
            v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
            *(_DWORD *)(v19 + 20) &= v20;
            if ( v21 )
              sub_140418E4C((__int64)v18);
          }
        }
      }
      __writecr8(CurrentIrql);
      dword_140C2B170 = dword_140D06938;
      dword_140C2B174 = dword_140D06938;
      result = dword_140C2B1C8;
      dword_140C2B178 = dword_140C2B1C8;
      dword_140C2B17C = dword_140C2B1C8;
    }
    else
    {
      if ( (_DWORD)BugCheckParameter2 != 2 )
        KeBugCheckEx(0x33u, 1uLL, (unsigned int)BugCheckParameter2, 0LL, 0LL);
      if ( (_BYTE)dword_140D05304 )
        goto LABEL_38;
      if ( !byte_140D0688B || (result = dword_140D0688C, (dword_140D0688C & 2) != 0) )
      {
        v23 = 1;
        result = EmClientQueryRuleState(qword_140013088, &v23);
        if ( v23 == 2 )
          dword_140D05304 = 3;
      }
      if ( (_BYTE)dword_140D05304 )
      {
LABEL_38:
        result = sub_1405D0AB4();
        dword_140D06A38 = 1;
      }
      _InterlockedOr(v22, 0);
      byte_140D06A50 = 1;
    }
  }
  else
  {
    v7 = *(const char **)(a2 + 216);
    qword_140C2B168 = -1LL;
    qword_140C2B188 = -1LL;
    if ( v7 && strstr(v7, "DISABLEDYNAMICTICK") )
      dword_140D05304 = 1;
    sub_14042A5E0(&v26, a2);
    if ( (v26 & 4) != 0 )
      byte_140D068E5 = 1;
    if ( (v26 & 2) != 0 )
      byte_140D06A4F = 1;
    if ( (v26 & 1) != 0 )
      byte_140D06AA7 = 1;
    if ( !(_BYTE)dword_140D05304 && (v26 & 8) == 0 )
      dword_140D05304 = 2;
    return sub_1403D94C0(v27, v28);
  }
  return result;
}
