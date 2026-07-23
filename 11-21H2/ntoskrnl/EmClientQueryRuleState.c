/*
 * XREFs of EmClientQueryRuleState @ 0x140A47D40
 * Callers:
 *     sub_1403D8A98 @ 0x1403D8A98 (sub_1403D8A98.c)
 *     sub_1407628C0 @ 0x1407628C0 (sub_1407628C0.c)
 *     sub_140818E88 @ 0x140818E88 (sub_140818E88.c)
 *     sub_14085894C @ 0x14085894C (sub_14085894C.c)
 *     sub_140858C40 @ 0x140858C40 (sub_140858C40.c)
 *     sub_14098C234 @ 0x14098C234 (sub_14098C234.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B27884 @ 0x140B27884 (sub_140B27884.c)
 *     sub_140B30FEC @ 0x140B30FEC (sub_140B30FEC.c)
 *     sub_140B5323C @ 0x140B5323C (sub_140B5323C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402DCBD4 @ 0x1402DCBD4 (sub_1402DCBD4.c)
 *     sub_1402DCBFC @ 0x1402DCBFC (sub_1402DCBFC.c)
 *     sub_1402DCC34 @ 0x1402DCC34 (sub_1402DCC34.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140A47F30 @ 0x140A47F30 (sub_140A47F30.c)
 *     sub_140A47FAC @ 0x140A47FAC (sub_140A47FAC.c)
 */

__int64 __fastcall EmClientQueryRuleState(_QWORD *a1, _DWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  volatile signed __int32 *v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbp

  v2 = 0;
  if ( a1 && a2 )
  {
    *a2 = 1;
    if ( (unsigned __int8)sub_140A47FAC() )
    {
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C70, 0LL);
      v5 = sub_1402DCBFC(a1);
      v6 = v5;
      if ( v5 && (v7 = (volatile signed __int32 *)sub_1402DCBD4((__int64)v5), (v9 = v7) != 0LL) )
      {
        _InterlockedIncrement(v7);
        sub_1402DCC34(v8, 0LL);
        _InterlockedAdd(v9, 0xFFFFFFFF);
        *a2 = *((_DWORD *)v6 + 4);
      }
      else
      {
        v2 = -1073741275;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C70, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C48C70);
      sub_1402AFC00((ULONG_PTR)&qword_140C48C70);
      sub_140A47F30();
    }
    else
    {
      return (unsigned int)-1073741818;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
