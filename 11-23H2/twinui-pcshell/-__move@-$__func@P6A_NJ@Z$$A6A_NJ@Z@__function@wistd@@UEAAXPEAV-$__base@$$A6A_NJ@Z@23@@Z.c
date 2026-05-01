/*
 * XREFs of ?__move@?$__func@P6A_NJ@Z$$A6A_NJ@Z@__function@wistd@@UEAAXPEAV?$__base@$$A6A_NJ@Z@23@@Z @ 0x180698920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::__function::__func<bool (*)(long),bool (long)>::__move(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = &wistd::__function::__func<bool (*)(long),bool (long)>::`vftable';
  result = *(_QWORD *)(a1 + 8);
  a2[1] = result;
  return result;
}
