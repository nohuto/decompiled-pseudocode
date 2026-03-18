/*
 * XREFs of CmpCreateExtendedControlSets @ 0x140B3A1B4
 * Callers:
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     CmpCreateControlSet @ 0x140B71258 (CmpCreateControlSet.c)
 *     CmpCreateControlSetOverride @ 0x140B990C4 (CmpCreateControlSetOverride.c)
 */

__int64 __fastcall CmpCreateExtendedControlSets(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 *v8; // rbx

  if ( !CmStateSeparationEnabled
    || (LOBYTE(a2) = 1, result = CmpCreateControlSet(L"DEVICES", a2),
                        a2 = (unsigned int)result + 0x80000000,
                        (int)a2 < 0)
    || (_DWORD)result == -1073741772 )
  {
    v3 = *(_QWORD *)(a1 + 240);
    v4 = (__int64 *)(v3 + 312);
    v5 = *(__int64 **)(v3 + 312);
    while ( v5 != v4 )
    {
      if ( (*((_DWORD *)v5 + 6) & 0x80u) != 0 )
      {
        LOBYTE(a2) = 1;
        result = CmpCreateControlSet(v5[6], a2);
        if ( (int)result < 0 )
          return result;
      }
      v3 = *(_QWORD *)(a1 + 240);
      v5 = (__int64 *)*v5;
      v4 = (__int64 *)(v3 + 312);
    }
    if ( CmStateSeparationEnabled )
    {
      v7 = v3 + 312;
      v8 = *(__int64 **)(v3 + 312);
      while ( v8 != (__int64 *)v7 )
      {
        if ( (v8[3] & 0x40) != 0 )
        {
          result = CmpCreateControlSetOverride(v8);
          if ( (int)result < 0 )
            return result;
        }
        v8 = (__int64 *)*v8;
        v7 = *(_QWORD *)(a1 + 240) + 312LL;
      }
    }
    return 0LL;
  }
  return result;
}
