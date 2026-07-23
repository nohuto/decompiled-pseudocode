/*
 * XREFs of ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0
 * Callers:
 *     sub_1402094C4 @ 0x1402094C4 (sub_1402094C4.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1402165BC @ 0x1402165BC (sub_1402165BC.c)
 *     sub_140220944 @ 0x140220944 (sub_140220944.c)
 *     sub_140220A44 @ 0x140220A44 (sub_140220A44.c)
 *     sub_140220AAC @ 0x140220AAC (sub_140220AAC.c)
 *     sub_140232200 @ 0x140232200 (sub_140232200.c)
 *     sub_140234D1C @ 0x140234D1C (sub_140234D1C.c)
 *     sub_14023F8E8 @ 0x14023F8E8 (sub_14023F8E8.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     sub_1402443D8 @ 0x1402443D8 (sub_1402443D8.c)
 *     sub_140253A44 @ 0x140253A44 (sub_140253A44.c)
 *     sub_14025753C @ 0x14025753C (sub_14025753C.c)
 *     sub_14025C884 @ 0x14025C884 (sub_14025C884.c)
 *     sub_14025CE80 @ 0x14025CE80 (sub_14025CE80.c)
 *     sub_140263404 @ 0x140263404 (sub_140263404.c)
 *     sub_140267060 @ 0x140267060 (sub_140267060.c)
 *     NaptrDnsRecordConvert @ 0x140267594 (NaptrDnsRecordConvert.c)
 *     sub_140267CA8 @ 0x140267CA8 (sub_140267CA8.c)
 *     sub_140268520 @ 0x140268520 (sub_140268520.c)
 *     sub_14026EF44 @ 0x14026EF44 (sub_14026EF44.c)
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 *     sub_140276E5C @ 0x140276E5C (sub_140276E5C.c)
 *     sub_140281DE0 @ 0x140281DE0 (sub_140281DE0.c)
 *     sub_1402829D0 @ 0x1402829D0 (sub_1402829D0.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     sub_140287FB8 @ 0x140287FB8 (sub_140287FB8.c)
 *     sub_14028B330 @ 0x14028B330 (sub_14028B330.c)
 *     sub_140292350 @ 0x140292350 (sub_140292350.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402C0900 @ 0x1402C0900 (sub_1402C0900.c)
 *     sub_1402C15F0 @ 0x1402C15F0 (sub_1402C15F0.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402C9E70 @ 0x1402C9E70 (sub_1402C9E70.c)
 *     sub_1402CA210 @ 0x1402CA210 (sub_1402CA210.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402CC9A0 @ 0x1402CC9A0 (sub_1402CC9A0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_1402E48A0 @ 0x1402E48A0 (sub_1402E48A0.c)
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E86F0 @ 0x1402E86F0 (sub_1402E86F0.c)
 *     sub_1402EBB58 @ 0x1402EBB58 (sub_1402EBB58.c)
 *     sub_1402EC4D0 @ 0x1402EC4D0 (sub_1402EC4D0.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1402F00BC @ 0x1402F00BC (sub_1402F00BC.c)
 *     sub_140302650 @ 0x140302650 (sub_140302650.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_14030CF90 @ 0x14030CF90 (sub_14030CF90.c)
 *     sub_14030FC20 @ 0x14030FC20 (sub_14030FC20.c)
 *     sub_1403122F0 @ 0x1403122F0 (sub_1403122F0.c)
 *     sub_1403171A0 @ 0x1403171A0 (sub_1403171A0.c)
 *     sub_14031A5C0 @ 0x14031A5C0 (sub_14031A5C0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140330080 @ 0x140330080 (sub_140330080.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_140338660 @ 0x140338660 (sub_140338660.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_14034F230 @ 0x14034F230 (sub_14034F230.c)
 *     sub_140355EE8 @ 0x140355EE8 (sub_140355EE8.c)
 *     sub_140356948 @ 0x140356948 (sub_140356948.c)
 *     sub_14035EB3C @ 0x14035EB3C (sub_14035EB3C.c)
 *     sub_14035EC68 @ 0x14035EC68 (sub_14035EC68.c)
 *     sub_14036D62C @ 0x14036D62C (sub_14036D62C.c)
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 *     sub_1403872A4 @ 0x1403872A4 (sub_1403872A4.c)
 *     sub_140389084 @ 0x140389084 (sub_140389084.c)
 *     sub_14038A214 @ 0x14038A214 (sub_14038A214.c)
 *     sub_14038A428 @ 0x14038A428 (sub_14038A428.c)
 *     sub_14038E148 @ 0x14038E148 (sub_14038E148.c)
 *     sub_14038ECAC @ 0x14038ECAC (sub_14038ECAC.c)
 *     sub_14038EE6C @ 0x14038EE6C (sub_14038EE6C.c)
 *     sub_140395670 @ 0x140395670 (sub_140395670.c)
 *     sub_140396D30 @ 0x140396D30 (sub_140396D30.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403DA8E4 @ 0x1403DA8E4 (sub_1403DA8E4.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 *     sub_14045F78C @ 0x14045F78C (sub_14045F78C.c)
 *     sub_14054E830 @ 0x14054E830 (sub_14054E830.c)
 *     sub_14056C444 @ 0x14056C444 (sub_14056C444.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 *     sub_140588F74 @ 0x140588F74 (sub_140588F74.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_14058DFB8 @ 0x14058DFB8 (sub_14058DFB8.c)
 *     sub_14058E05C @ 0x14058E05C (sub_14058E05C.c)
 *     sub_14058E7F4 @ 0x14058E7F4 (sub_14058E7F4.c)
 *     sub_140591724 @ 0x140591724 (sub_140591724.c)
 *     sub_140591AD0 @ 0x140591AD0 (sub_140591AD0.c)
 *     sub_14059C6B4 @ 0x14059C6B4 (sub_14059C6B4.c)
 *     sub_14059DB28 @ 0x14059DB28 (sub_14059DB28.c)
 *     sub_14059FBF4 @ 0x14059FBF4 (sub_14059FBF4.c)
 *     sub_1405A032C @ 0x1405A032C (sub_1405A032C.c)
 *     sub_1405A0964 @ 0x1405A0964 (sub_1405A0964.c)
 *     sub_1405A7158 @ 0x1405A7158 (sub_1405A7158.c)
 *     sub_1405A828C @ 0x1405A828C (sub_1405A828C.c)
 *     sub_1405A89EC @ 0x1405A89EC (sub_1405A89EC.c)
 *     sub_1405AD7A0 @ 0x1405AD7A0 (sub_1405AD7A0.c)
 *     sub_1405AD9AC @ 0x1405AD9AC (sub_1405AD9AC.c)
 *     sub_1405ADDA8 @ 0x1405ADDA8 (sub_1405ADDA8.c)
 *     sub_1405AEA7C @ 0x1405AEA7C (sub_1405AEA7C.c)
 *     sub_1405B350C @ 0x1405B350C (sub_1405B350C.c)
 *     sub_1405B3654 @ 0x1405B3654 (sub_1405B3654.c)
 *     sub_1405B379C @ 0x1405B379C (sub_1405B379C.c)
 *     sub_1405B4024 @ 0x1405B4024 (sub_1405B4024.c)
 *     sub_1405BC9E8 @ 0x1405BC9E8 (sub_1405BC9E8.c)
 *     sub_1405BE340 @ 0x1405BE340 (sub_1405BE340.c)
 *     sub_1405C184C @ 0x1405C184C (sub_1405C184C.c)
 *     sub_1405E29C8 @ 0x1405E29C8 (sub_1405E29C8.c)
 *     sub_1405E4244 @ 0x1405E4244 (sub_1405E4244.c)
 *     sub_1405E439C @ 0x1405E439C (sub_1405E439C.c)
 *     sub_1405E7AF0 @ 0x1405E7AF0 (sub_1405E7AF0.c)
 *     sub_140601F88 @ 0x140601F88 (sub_140601F88.c)
 *     sub_140629628 @ 0x140629628 (sub_140629628.c)
 *     sub_1406297E0 @ 0x1406297E0 (sub_1406297E0.c)
 *     sub_140A994C4 @ 0x140A994C4 (sub_140A994C4.c)
 * Callees:
 *     sub_140220C30 @ 0x140220C30 (sub_140220C30.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

void __stdcall ExAcquireSpinLockExclusiveAtDpcLevel(PEX_SPIN_LOCK SpinLock)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char v5; // dl
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  volatile LONG i; // ecx
  int v12; // [rsp+38h] [rbp+10h] BYREF

  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
  {
    v5 = -1;
    sub_140461A66(SpinLock, v5);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = 0;
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v8 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v8 + 1;
        if ( v8 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v9 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v10 = *(_DWORD *)(v9 + 24) - 1;
          *(_DWORD *)(v9 + 24) = v10;
          if ( !v10 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      v12 = sub_140220C30((int *)SpinLock, 0xFFu);
    }
    for ( i = *SpinLock; (*SpinLock & 0xBFFFFFFF) != 0x80000000; i = *SpinLock )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedOr(SpinLock, 0x40000000u);
      sub_1402F32E0(&v12, v1, v2, v3);
    }
  }
}
