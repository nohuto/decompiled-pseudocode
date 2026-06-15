/*
 * XREFs of ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180004960
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800045D0 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800047A0 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$map@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180005800 (--$_Try_emplace@AEBK$$V@-$map@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@@std@@AEAA-AU.c)
 */

__int64 __fastcall CResourcePriorityTracker::AddResourcePriorityToMap(CResourcePriorityTracker *this, unsigned int a2)
{
  char *v3; // rcx
  __int64 *v4; // rax
  __int64 *v5; // r9
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = (char *)this + 40;
  v4 = *(__int64 **)v3;
  v5 = *(__int64 **)(*(_QWORD *)v3 + 8LL);
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( *((_DWORD *)v5 + 7) < a2 )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  if ( *((_BYTE *)v4 + 25) || a2 < *((_DWORD *)v4 + 7) )
  {
    *(_DWORD *)(*(_QWORD *)std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>(v3, v8, &v9)
              + 32LL) = 1;
  }
  else
  {
    v7 = std::map<unsigned long,unsigned long>::_Try_emplace<unsigned long const &,>((char *)this + 40, v8, &v9);
    ++*(_DWORD *)(*(_QWORD *)v7 + 32LL);
  }
  return 0LL;
}
