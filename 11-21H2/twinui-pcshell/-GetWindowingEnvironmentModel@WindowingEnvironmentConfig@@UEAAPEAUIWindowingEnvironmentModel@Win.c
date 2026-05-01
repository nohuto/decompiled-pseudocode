/*
 * XREFs of ?GetWindowingEnvironmentModel@WindowingEnvironmentConfig@@UEAAPEAUIWindowingEnvironmentModel@WindowingEnvironment@ApplicationModel@Internal@Windows@@XZ @ 0x180184230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *__fastcall WindowingEnvironmentConfig::GetWindowingEnvironmentModel(
        WindowingEnvironmentConfig *this)
{
  return (struct Windows::Internal::ApplicationModel::WindowingEnvironment::IWindowingEnvironmentModel *)*((_QWORD *)this + 3);
}
