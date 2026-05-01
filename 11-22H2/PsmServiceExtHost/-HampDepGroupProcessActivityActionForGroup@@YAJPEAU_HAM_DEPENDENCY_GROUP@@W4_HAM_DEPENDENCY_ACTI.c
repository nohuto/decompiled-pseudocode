/*
 * XREFs of ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18003BAE4
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B818 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BB2C (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18003D4B0 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007CB2C (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007CE1C (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 */

__int64 __fastcall HampDepGroupProcessActivityActionForGroup(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int8 a2)
{
  int v2; // esi
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rdi
  __int64 result; // rax
  struct _HAM_HOST_DEPENDENCY *v5; // rbx
  __int64 v6; // rdx

  v2 = a2;
  FirstDependency = HampDepGroupGetFirstDependency(a1);
  while ( FirstDependency )
  {
    v5 = FirstDependency;
    FirstDependency = HampDepGroupGetNextDependency(FirstDependency);
    if ( (*((_DWORD *)v5 + 8) & 7) == v2 )
    {
      if ( *((_BYTE *)v5 + 40) == 3 )
      {
        HampHostDepDestroy(v5);
      }
      else
      {
        LOBYTE(v6) = v2;
        result = HampDepGroupProcessActionForActivity(*(_QWORD *)v5, v6);
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)v2 == 1 )
        {
          *((_DWORD *)v5 + 8) &= 0xFFFFFFFC;
          *((_DWORD *)v5 + 8) |= 4u;
        }
      }
    }
  }
  return 0LL;
}
