/*
 * XREFs of sub_180004DB0 @ 0x180004DB0
 * Callers:
 *     sub_180002FB0 @ 0x180002FB0 (sub_180002FB0.c)
 *     sub_180003338 @ 0x180003338 (sub_180003338.c)
 *     sub_180003670 @ 0x180003670 (sub_180003670.c)
 *     sub_180003CB0 @ 0x180003CB0 (sub_180003CB0.c)
 *     sub_180003D80 @ 0x180003D80 (sub_180003D80.c)
 *     sub_18001C0A0 @ 0x18001C0A0 (sub_18001C0A0.c)
 * Callees:
 *     sub_180005018 @ 0x180005018 (sub_180005018.c)
 *     sub_180005090 @ 0x180005090 (sub_180005090.c)
 *     sub_180005FC0 @ 0x180005FC0 (sub_180005FC0.c)
 *     sub_18000BAB0 @ 0x18000BAB0 (sub_18000BAB0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 sub_180004DB0()
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int v3; // eax
  int v4; // edi

  RtlAcquireSRWLockExclusive(&unk_180032C38);
  if ( qword_180032C78 )
  {
    RtlReleaseSRWLockExclusive(&unk_180032C38);
    return 0LL;
  }
  else
  {
    v1 = sub_18000BAB0(0x70uLL);
    if ( v1 && (v2 = sub_180005018(v1)) != 0 )
    {
      v3 = sub_180005FC0(&unk_1800206F0);
      v4 = v3 | 0x10000000;
      if ( v3 < 0 || (v4 = sub_180005090(v2), v4 < 0) )
      {
        RtlReleaseSRWLockExclusive(&unk_180032C38);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
        return (unsigned int)v4;
      }
      else
      {
        if ( qword_180032C78 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180032C78 + 16LL))(qword_180032C78);
        qword_180032C78 = v2;
        RtlReleaseSRWLockExclusive(&unk_180032C38);
        return 0LL;
      }
    }
    else
    {
      RtlReleaseSRWLockExclusive(&unk_180032C38);
      return 2147942414LL;
    }
  }
}
