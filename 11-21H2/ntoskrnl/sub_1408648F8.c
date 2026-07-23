/*
 * XREFs of sub_1408648F8 @ 0x1408648F8
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     sub_140768798 @ 0x140768798 (sub_140768798.c)
 *     sub_140768894 @ 0x140768894 (sub_140768894.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408648F8(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v8; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rax

  if ( byte_140C44618 )
  {
    if ( byte_140C445D0 )
    {
      return (unsigned int)-1073741058;
    }
    else
    {
      Pool2 = ExAllocatePool2(256LL, 88LL, 1634758224LL);
      v11 = (_QWORD *)Pool2;
      if ( Pool2 )
      {
        v8 = sub_140768894(Pool2, 4, a2, a3, a1, (__int64)&stru_140C445E0);
        if ( v8 < 0 || (v8 = sub_140768798((__int64)v11), v8 < 0) )
        {
          ExFreePoolWithTag(v11, 0x61706E50u);
        }
        else
        {
          ExAcquireFastMutex(&stru_140C445E0);
          v12 = (_QWORD *)qword_140C445C8;
          if ( *(PVOID **)qword_140C445C8 != &qword_140C445C0 )
            __fastfail(3u);
          *v11 = &qword_140C445C0;
          v11[1] = v12;
          *v12 = v11;
          qword_140C445C8 = (__int64)v11;
          KeReleaseGuardedMutex(&stru_140C445E0);
          *a4 = v11;
        }
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
